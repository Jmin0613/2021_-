using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports; //시리얼 통신을 하기 위한 port 처리해주는 부분
using System.Windows.Forms.DataVisualization.Charting;
using System.Data.SqlClient;

namespace F015_ArduinoSensorMonitoringInCS
{
    public partial class Form1 : Form
    {
        private SerialPort sPort;
        private int xCount = 200;
        List<SensorData> myData = new List<SensorData>(); // 리스트 객체 생성

        string connString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename="C:\Users\jumin\OneDrive\바탕 화면\기말 비주얼(강의)\F015_ArduinoSensorMonitoringInCS\F015_ArduinoSensorMonitoringInCS\SensorData.mdf";Integrated Security=True"
        public Form1()
        {
            InitializeComponent();

            //ComboBox
            foreach (var port in SerialPort.GetPortNames()) //문자열의 배열, 그 각각에 있는 요소(포트)를 가져옴
            {
                comboBox1.Items.Add(port);
            }
            comboBox1.Text = "Select Port";

            //ProgressBar
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 1023;

            //Chart 세팅
            ChartSetting();

            // 숫자 표시 버튼
            btnValue.BackColor = Color.Blue;
            btnValue.ForeColor = Color.White;
            btnValue.Font = new Font("맑은 고딕", 16, FontStyle.Bold);

            //연결 시간 레이블 처리
            lblConnectTime.Text = "Connection Time : ";

            // txtCount
            txtCount.TextAlign = HorizontalAlignment.Center;

            // Connect, Disconnect 버튼
            btnConnect.Enabled = false; //비활성화
            btnDisconnect.Enabled = false;
        }

        private void ChartSetting()
        {
            chart1.ChartAreas.Clear(); //디폴트 지워줌
            chart1.ChartAreas.Add("draw"); //차트에어리어 추가
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = xCount;
            chart1.ChartAreas["draw"].AxisX.Interval = xCount / 4;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineDashStyle = ChartDashStyle.Dash;

            chart1.ChartAreas["draw"].AxisY.Minimum = 0;
            chart1.ChartAreas["draw"].AxisY.Maximum = 1024;
            chart1.ChartAreas["draw"].AxisY.Interval = 200;
            chart1.ChartAreas["draw"].AxisY.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas["draw"].AxisY.MajorGrid.LineDashStyle = ChartDashStyle.Dash;

            chart1.ChartAreas["draw"].BackColor = Color.Blue;
            chart1.ChartAreas["draw"].CursorX.AutoScroll = true;

            //차트 줌 기능
            chart1.ChartAreas["draw"].AxisX.ScaleView.Zoomable = true;
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonStyle = ScrollBarButtonStyles.SmallScroll;
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonColor = Color.LightSteelBlue;

            //시리즈 영역
            chart1.Series.Clear(); // 디폴트 지워줌
            chart1.Series.Add("PhotoCell");
            chart1.Series["PhotoCell"].ChartType = SeriesChartType.Line;
            chart1.Series["PhotoCell"].Color = Color.LightGreen;
            chart1.Series["PhotoCell"].BorderWidth = 3; //선 굵기
            if (chart1.Legends.Count > 0) //레전드가 있다면
                chart1.Legends.RemoveAt(0); //없애기
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            ComboBox cb = sender as ComboBox;
            sPort = new SerialPort(cb.SelectedItem.ToString());
            sPort.Open(); //sPort 열어주기
            sPort.DataReceived += SPort_DataReceived;  //데이터받는 이벤트

            lblConnectTime.Text = "Connection Time : " + DateTime.Now.ToString(); //현재시각
            btnDisconnect.Enabled = true; //연결된 상태니간 연결끊기위한 btnDis는 enabled=true 해줌
        }

        private void SPort_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            string s = sPort.ReadLine(); //한줄 읽어오기
            this.BeginInvoke(new Action(delegate { ShowValue(s); })); //프로세스 하나 더 만들어서, 거기서 처리하게 할 때

        }

        private void ShowValue(string s)
        {
            int v = 0;
            try //try-catch문
            {
                v = Int32.Parse(s);
            } // 성공할수도 실패할수도
            catch (FormatException) //정수로 반환 안되는 예외
            {
                Console.WriteLine("Unable to convert{0}", s);
                return;

            }
            //숫자로 번역, 번역하면 에러나옴 -> 통신이기 때문에, 통신선에서 잡음 생겨서
            if (v < 0 || v > 1023) //잡음생겨서 못쓰는 숫자
                return; //버리기

            SensorData data = new SensorData(
                DateTime.Now.ToShortDateString(), DateTime.Now.ToString("HH:mm:ss"), v);

            myData.Add(data);
            DBInsert(data);

            txtCount.Text = myData.Count().ToString();
            progressBar1.Value = v;

            string item = DateTime.Now.ToString() + "\t" + s;
            listBox1.Items.Add(item);
            listBox1.SelectedIndex = listBox1.Items.Count - 1; //스크롤되게 하는 부분

            // Chart
            chart1.Series["PhotoCell"].Points.Add(v);

            // 차트에서 스크롤 하는 부분
            // zoom을 위해서 200개 까지는 보여주고, 그보다 숫자 많아지면
            // 200개 보여주되 스크롤이 나타나게 한다
            // 뒷쪽에 있는 200개 보여준다
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draaw"].AxisX.Maximum =
                (myData.Count >= 200) ? myData.Count : xCount;
            if (myData.Count > xCount)
                chart1.ChartAreas["draaw"].AxisX.ScaleView.Zoom
                    (myData.Count - xCount, myData.Count);
            else
                chart1.ChartAreas["draw"].AxisX.ScaleView.Zoom(0, xCount);

            // 숫자버튼
            btnValue.Text = sPort.PortName + "\n" + s;
        }

        private void DBInsert(SensorData data)
        {
            string sql = string.Format(
                "INSERT INTO SensorTable(Date, Time, Value) Values ('{0}','{1}',{2})",
                data.Date, data.Time, data.Value);
            try //DB 인서트
            {
                using (SqlConnection conn = new SqlConnection(connString))
                using (SqlCommand comm = new SqlCommand(sql, conn))
                {
                    conn.Open(); // 열어주기
                    comm.ExecuteNonQuery(); // 실행하기
                }
            }
            catch(Exception)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnDisconnect_Click(object sender, EventArgs e)
        {
            sPort.Close();
            btnConnect.Enabled = true;
            btnDisconnect.Enabled = false;
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            sPort.Open();
            btnDisconnect.Enabled = true;
            btnConnect.Enabled = false;
        }

        private void btnViewAll_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = myData.Count;

            chart1.ChartAreas["draw"].AxisX.ScaleView.Zoom(0, myData.Count);
            chart1.ChartAreas["draw"].AxisX.Interval = myData.Count / 4;
        }

        private void btnZoom_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = myData.Count;
            chart1.ChartAreas["draw"].AxisX.ScaleView.Zoom(myData.Count - xCount, myData.Count);
            chart1.ChartAreas["draw"].AxisX.Interval = xCount / 4;
        }
    }
}
