using System;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace F010_Chart
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Text = "Using Chart Control";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Random r = new Random();

            chart1.Titles.Add("중간고사 성적");

            for(int i = 0; i < 10; i++)
                chart1.Series["Series1"].Points.Add(r.Next(50, 100));
            //50에서 100점 사이의 값 랜덤하게 집어넣음

            chart1.Series["Series1"].LegendText = "수학";
            chart1.Series[0].ChartType = SeriesChartType.Line;  //차트 타입 -> 라인
        }
    }
}
