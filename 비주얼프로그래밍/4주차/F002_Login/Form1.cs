using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace F002_Login
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (txtID.Text == "" || txtPassword.Text == "")
                return;
            if (txtID.Text == "abcd" && txtPassword.Text == "1234")
                txtResult.Text = "성공입니다.";
            else txtResult.Text = "실패입니다.";
        }
    }
}
