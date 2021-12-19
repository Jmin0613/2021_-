using System;
using System.Windows.Forms;

namespace F011_TwoCharts
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Text = "Using Chart Control 2";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            chart1.Titles.Add("중간고사 성적");
            chart1.Series.Add("Series2"); // 새로운 시리즈 추가
            chart1.Series["Series1"].LegendText = "수학";
            chart1.Series["Series2"].LegendText = "영어";

            chart1.ChartAreas.Add("ChartArea2"); // 새로운 차트에어리어 추가
            chart1.Series["Series2"].ChartArea = "ChartArea2"; // ChartArea2에 그려준단 의미

            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                chart1.Series["Series1"].Points.Add(r.Next(100)); // 랜덤값 주기
                chart1.Series["Series2"].Points.Add(r.Next(100)); // 랜덤값 주기
            }
        }

        //합쳐서 그리기
        private void btnOneChartArea_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas.RemoveAt // 차트에어리어를 지워라
                (chart1.ChartAreas.IndexOf("ChartArea2")); // 차트에어리어2에 인덱스가 있는 차트에어리어를 지워라
            chart1.Series["Series2"].ChartArea = "ChartArea1"; // ChartArea1에 그려준단 의미
        }

        private void btnTwoChartArea_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas.Add("ChartArea2");
            chart1.Series["Series2"].ChartArea = "ChartArea2";
            // 차트에어리어를 추가하고 삭제할 수 있구나, 시리즈를 어떤 차트에다가 할당할 수 있구나
        }
    }
}
