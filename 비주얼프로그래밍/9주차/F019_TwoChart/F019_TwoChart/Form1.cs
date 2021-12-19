using System;
using System.Windows.Forms;

namespace F019_TwoChart
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Text = "Uisng Chart Control 2";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            chart1.Titles.Add("중간고사 성적");
            chart1.Series.Add("Series2");
            chart1.Series["Series1"].LegendText = "수학";
            chart1.Series["Series1"].LegendText = "영어";

            chart1.ChartAreas.Add("ChartArea2");
            chart1.Series["Series2"].ChartArea = "ChartArea2";

            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                chart1.Series["Series1"].Points.Add(r.Next(100));
                chart1.Series["Series2"].Points.Add(r.Next(100));
            }
        }

        private void btnOneChartArea_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas.RemoveAt(chart1.ChartAreas.IndexOf("ChartArea2"));
            chart1.Series["Series2"].ChartArea = "ChartArea1";
        }

        private void btnTwoChartArea_Click(object sender, EventArgs e)
        {
            chart1.ChartAreas.Add("ChartArea2");
            chart1.Series["Series2"].ChartArea = "ChartArea2";
        }
    }
}
