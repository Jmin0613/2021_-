using System;
using System.Windows.Forms;

namespace A134_CheckBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string checkStates = ""; //메세지 박스에 표시할 문자열 checkStates 선언
            CheckBox[] cBox // 체크박스 배열 cBox를 선언
                = { checkBox1, checkBox2, checkBox3, checkBox4, checkBox5 };
            // 프로그램에서 사용된 5개의 체크박스로 초기화

            foreach (var item in cBox) // var -> 암시적
            {
                checkStates += string.Format("{0} : {1}\n",
                    item.Text, item.Checked);
            }
            MessageBox.Show(checkStates, "checkStates"); // MessageBox.Show("메세지 내용", "타이틀 이름");

            string summary = string.Format("좋아하는 과일은 : ");
            foreach(var item in cBox) // true인 것만 summary에 추가, 메세지박스에 summary 출력
            {
                if (item.Checked == true)
                    summary += item.Text + " ";
            }
            MessageBox.Show(summary, "summary");
        }
    }
}
