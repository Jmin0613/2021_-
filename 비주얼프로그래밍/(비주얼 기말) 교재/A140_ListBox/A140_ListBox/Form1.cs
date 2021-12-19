using System;
using System.Windows.Forms;

namespace A140_ListBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            ListBox lst = sender as ListBox;
            txtSItem1.Text = lst.SelectedIndex.ToString();
            txtSItem1.Text = lst.SelectedItem.ToString();
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            ListBox lst = sender as ListBox;
            txtSItem2.Text = lst.SelectedIndex.ToString();
            txtSItem2.Text = lst.SelectedItem.ToString();
        }

        private void listBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            ListBox lst = sender as ListBox;
            txtSItem3.Text = lst.SelectedIndex.ToString();
            txtSItem3.Text = lst.SelectedItem.ToString();
        }
    }
}