using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.IO.Ports;
using System.Windows.Forms.DataVisualization.Charting;

namespace F023_ArduinoMonitoring
{
    public partial class Form1 : Form
    {
        private SerialPort sPort;
        private double xCount = 200;
        List<SensorData> myData = new List<SensorData>();

        public Form1()
        {
            InitializeComponent();

            //combobox
            foreach (var port in SerialPort.GetPortNames())
            {
                comboBox1.Items.Add(port);
            }
            comboBox1.Text = "Select Port";

            //Progressbar
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 1023;

            //chart 세팅
            ChartSetting();

            //숫자 표시 버튼
            btnValue.BackColor = Color.Blue;
            btnValue.ForeColor = Color.White;
            btnValue.Font = new Font("맑은 고딕", 16, FontStyle.Bold);

            //연결시간 레이블 처리
            lblConnectTime.Text = "Connection Time : ";

            //txtCount
            txtCount.TextAlign = HorizontalAlignment.Center;

            //Connect, Disconnect 버튼
            btnConnect.Enabled = false;
            btnDisconnect.Enabled = false;
        }

        private void ChartSetting()
        {
            chart1.ChartAreas.Clear();
            chart1.ChartAreas.Add("draw");
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = xCount;
            chart1.ChartAreas["draw"].AxisX.Interval = xCount / 4;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineDashStyle = ChartDashStyle.Dash;

            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = 1024;
            chart1.ChartAreas["draw"].AxisX.Interval = 200;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas["draw"].AxisX.MajorGrid.LineDashStyle = ChartDashStyle.Dash;

            chart1.ChartAreas["draw"].BackColor = Color.Blue;
            chart1.ChartAreas["draw"].CursorX.AutoScroll = true;

            chart1.ChartAreas["draw"].AxisX.ScaleView.Zoomable = true;
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonStyle = ScrollBarButtonStyles.SmallScroll;
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonColor = Color.LightSteelBlue;

            chart1.Series.Clear();
            chart1.Series.Add("PhotoCell");
            chart1.Series["PhotoCell"].ChartType = SeriesChartType.Line;
            chart1.Series["PhotoCell"].Color = Color.LightGreen;
            chart1.Series["PhotoCell"].BorderWidth = 3;
            if (chart1.Legends.Count > 0)
                chart1.Legends.RemoveAt(0);
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            ComboBox cb = sender as ComboBox;
            sPort = new SerialPort(cb.SelectedItem.ToString());
            sPort.Open();
            sPort.DataReceived += SPort_DataReceived;

            lblConnectTime.Text = "Connection Time : " + DateTime.Now.ToString();
            btnDisconnect.Enabled = true;
        }

        private void SPort_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            string s = sPort.ReadLine();
            this.BeginInvoke(new Action(delegate { ShowValue(s); }));
        }

        private void ShowValue(string s)
        {
            int v = 0;
            try
            {
                v = Int32.Parse(s);
            }
            catch (FormatException)
            {
                Console.WriteLine("Unable to convert {0}", s);
                return;
            }
            if (v < 0 || v > 1023)
                return;

            SensorData data = new SensorData(DateTime.Now.ToShortDateString(),
                DateTime.Now.ToString("HH:MM:SS"),
                v);

            myData.Add(data);
            DBInsert(data);

            txtCount.Text = myData.Count.ToString();
            progressBar1.Value = v;

            string item = DateTime.Now.ToString() + "\t" + s;
            listBox1.Items.Add(item);
            listBox1.SelectedIndex = listBox1.Items.Count - 1; //스크롤

            //chart
            chart1.Series["PhotoCell"].Points.Add(v);

            //차트에서 스크롤 하는 부분
            //zoom을 위해서 200개 까지는 그냥 보여주고, 그보다 숫자가 많아지면
            //200개를 보여주되 스크롤이 나타나게 한다.
            chart1.ChartAreas["draw"].AxisX.Minimum = 0;
            chart1.ChartAreas["draw"].AxisX.Maximum = (myData.Count >= 200) ? myData.Count : xCount;
            if (myData.Count > xCount)
                chart1.ChartAreas["draw"].AxisX.ScaleView.Zoom(myData.Count - xCount, myData.Count);
            else
                chart1.ChartAreas["darw"].AxisX.ScaleView.Zoom(0, xCount);

            //숫자 버튼
            btnValue.Text = sPort.PortName + "\n" + s;
        }

        private void DBInsert(SensorData data)
        {
            
        }
    }
}
