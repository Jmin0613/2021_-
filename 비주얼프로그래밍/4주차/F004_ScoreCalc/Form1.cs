using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace F004_ScoreCalc
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void groupBox2_Enter(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            double sum = double.Parse(txtKor.Text) 
                + double.Parse(txtMath.Text) 
                + double.Parse(txtEng.Text);

            double avg = sum / 3;

            txtsum.Text = sum.ToString(); //ToString()은 문자열로 변환
            txtavg.Text = avg.ToString("0.00");
            //ToString() 안에 포맷을 지정하는 기능이 있다.

        }
    }
}
