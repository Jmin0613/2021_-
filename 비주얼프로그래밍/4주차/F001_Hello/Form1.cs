using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace F001_Hello
{
    public partial class Form1 : Form
    {
        bool flag = false;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (flag == false)
            {
                label1.Text = "Hello Wolrd!";
                flag = true;
            }
            else
            {
                label1.Text = "";
                flag = false;
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
