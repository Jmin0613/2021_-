using System;
using System.Drawing;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace F012_GraphUsingChart
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Text = "Graph Using Chart";

            GraphSetting();
        }

        private void GraphSetting()
        {
            chart1.ChartAreas[0].BackColor = Color.Black;

            //차트영역의 x축과 y축 설정
            chart1.ChartAreas[0].AxisX.Minimum = -20;
            chart1.ChartAreas[0].AxisX.Maximum = 20;
            chart1.ChartAreas[0].AxisX.Interval = 2;
            chart1.ChartAreas[0].AxisX.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas[0].AxisX.MajorGrid.LineDashStyle = ChartDashStyle.Dash; //점선

            chart1.ChartAreas[0].AxisY.Minimum = -2;
            chart1.ChartAreas[0].AxisY.Maximum = 2;
            chart1.ChartAreas[0].AxisY.Interval = 0.5;
            chart1.ChartAreas[0].AxisY.MajorGrid.LineColor = Color.White;
            chart1.ChartAreas[0].AxisY.MajorGrid.LineDashStyle = ChartDashStyle.Dash; //점선

            //시리즈 설정
            chart1.Series[0].ChartType = SeriesChartType.Line; // chart1.Series[0] = chart1.Series["Series1"]
            chart1.Series[0].Color = Color.LightGreen;
            chart1.Series[0].BorderWidth = 2;
            chart1.Series[0].LegendText = "sin(x)/x";

            //시리즈 추가, 설정
            if (chart1.Series.Count == 1)
            {
                chart1.Series.Add("Cos");
                chart1.Series[1].ChartType = SeriesChartType.Line; // chart1.Series[1] == chart1.Series["Cos"]
                chart1.Series[1].Color = Color.Orange;
                chart1.Series[1].BorderWidth = 2;
                chart1.Series[1].LegendText = "cos(x)/x";
            }

            //값
            for (double x = -20; x < 20; x += 0.1)
            {
                double y = Math.Sin(x) / x;
                chart1.Series[0].Points.AddXY(x, y);
                y = Math.Cos(x) / x;
                chart1.Series[1].Points.AddXY(x, y);
            }
        }

    }
}