using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace A142_CheckedListBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            foreach (var city in cLstBox.CheckedItems)
                lstBox.Items.Add(city);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            foreach (var city in cLstBox.Items)
                lstBox.Items.Add(city);
        }

        private void button3_Click(object sender, EventArgs e)
        // lstRemove리스트 만들고, 여기에 lstBox의 선택된 아이템 추가. 이 리스트 요소를 lstBox에서 삭제.
        {
            List<string> lstRemove = new List<string>();

            foreach (string city in lstRemove)
                lstBox.Items.Remove(city);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            lstBox.Items.Clear();
        }
    }
}
