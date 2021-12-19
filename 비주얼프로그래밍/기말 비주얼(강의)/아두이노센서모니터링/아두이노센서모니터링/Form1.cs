using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports; //SerialPort클래스 사용하기 위해, 시리얼 통신을 하기 위한 port 처리해주는 부분
using System.Windows.Forms.DataVisualization.Charting;

namespace 아두이노센서모니터링
{
    public partial class Form1 : Form
    {
        SerialPort sPort;
        private int xCount = 200; //차트에 보여지는 데이터 개수
        List<SensorData> myData = new List<SensorData>(); // 리스트 객체 생성, 리스트 자료구조
        // Form1 클래스의 필드로 sPort, xCount, SensorData의 리스트인 myData를 생성

        public Form1()
        {
            InitializeComponent();

            // ComboBox
            foreach(var ports in SerialPort.GetPortNames())  //GetPortName() : 컴퓨터의 포트 이름을 가져옴, 리턴값은 string임
            {
                comboBox1.Items.Add(ports); //문자열의 배열, 그 각각에 있는 요소(포트)를 가져와서 comboBox1의 Items에 추가
            }
            comboBox1.Text = "Select Port"; //comboBox1에 표시되는 텍스트

            // 아두이노의 A0에서 받는 값의 범위 표시 -> progressBar의 최대값, 최소값 표시 
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 1023;

            // Chart 모양 세팅
            ChartSetting();

            // 숫자 표시 버튼, 시리얼 포트에서 읽어들인 값 표시하는 용도
            btnValue.BackColor = Color.Blue;
            btnValue.BackColor = Color.White;
            btnValue.Font = new Font("맑은 고딕", 16, FontStyle.Bold);

            //연결 시간 레이블 처리
            lblConnectTime.Text = "Connection Time : ";

            //txtCount
            txtCount.TextAlign = HorizontalAlignment.Center; //중앙정렬

            //Connect, Disconnect 버튼
            btnConnect.Enabled = false; //클릭할 수 없게 비활성화
            btnDisconnect.Enabled = false; 

        }

        private void ChartSetting() //Chart의 모양을 지정하는 메소드
        {
            //ChartSetting() 메소드에서 x축과 y축의 최소, 최대, 간격, 선모양 지정
            chart1.ChartAreas.Clear(); // 디폴트 ChartArea 지워줌
            chart1.ChartAreas.Add("draw"); // draw 라는 이름의 ChartArea 추가
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

            chart1.ChartAreas["draw"].BackColor = Color.Blue; //Chart 배경색 지정
            chart1.ChartAreas["draw"].CursorX.AutoScroll = true; //x축의 자동 스크롤 true로 세팅

            //Chart zoom 기능
            chart1.ChartAreas["draw"].AxisX.ScaleView.Zoomable = true; //x축의 zoomable을 true로 세팅
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonStyle = ScrollBarButtonStyles.SmallScroll; //스크롤바 모양 지정
            chart1.ChartAreas["draw"].AxisX.ScrollBar.ButtonColor = Color.LightSteelBlue;

            //시리즈 영역, 시리즈 -> 차트에 표시되는 데이터
            chart1.Series.Clear(); // 디폴트 Series 지워줌
            chart1.Series.Add("PhotoCell");
            chart1.Series["PhotoCell"].ChartType = SeriesChartType.Line; // 그래프 타입 -> 선그래프
            chart1.Series["PhotoCell"].Color = Color.LightGreen; // 선 색깔
            chart1.Series["PhotoCell"].BorderWidth = 3; // 선 두께
            if (chart1.Legends.Count > 0) //Legends(범례)가 있다면
                chart1.Legends.RemoveAt(0); //없애기
        }

        //콤보박스에서 포트를 설정하면 실행되는 이벤트 처리 메소드
        //콤보박스에서 통신포트를 선택하면 데이터를 받아서 리스트박스와 차트에 표시하는 부분
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            ComboBox cb = sender as ComboBox; //sender를  ComboBox cb로 받음
            sPort = new SerialPort(cb.SelectedItem.ToString()); //시리얼포트 객체인 sProt를 콤보박스에서 선택한 포트이름으로 생성
            sPort.Open(); //열어줌

        }
    }
}
