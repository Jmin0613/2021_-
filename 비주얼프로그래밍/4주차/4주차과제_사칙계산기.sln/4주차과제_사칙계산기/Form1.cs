using System;
using System.Windows.Forms;

namespace _4주차과제_사칙계산기
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            double Plus = double.Parse(txtNo1.Text) + double.Parse(txtNo2.Text);

            txtResult.Text = Plus.ToString();
            lblResult.Text = "(+)결과";

        }

        private void btnMinus_Click(object sender, EventArgs e)
        {
            double Minus = double.Parse(txtNo1.Text) - double.Parse(txtNo2.Text);
            txtResult.Text = Minus.ToString();
            lblResult.Text = "(-)결과";
        }

        private void btnTimes_Click(object sender, EventArgs e)
        {
            double Times = double.Parse(txtNo1.Text) * double.Parse(txtNo2.Text);
            txtResult.Text = Times.ToString();
            lblResult.Text = "(*)결과";
        }

        private void btnDivide_Click(object sender, EventArgs e)
        {
            double Divide = double.Parse(txtNo1.Text) / double.Parse(txtNo2.Text);
            txtResult.Text = Divide.ToString("0.00");
            lblResult.Text = "(/)결과";
        }

        private void lblResult_Click(object sender, EventArgs e)
        {
            
        }
    }
}
