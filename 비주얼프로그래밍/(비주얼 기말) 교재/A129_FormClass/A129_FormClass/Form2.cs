using System;
using System.Drawing;
using System.Windows.Forms;

namespace A129_FormClass
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
            this.ClientSize = new Size(300, 200);
        }

        private void Form2_Load(object sender, EventArgs e) //Form2가 화면에 Load될 때 실행되는 이벤트 메소드
        {
            CenterToParent(); //CenterToParent : 부모 폼의 중앙에 현재 폼 위치시킴
        }
    }
}