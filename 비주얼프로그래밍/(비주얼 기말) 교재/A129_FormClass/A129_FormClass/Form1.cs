using System.Drawing;
using System.Windows.Forms;

namespace A129_FormClass
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            this.ClientSize = new Size(500, 500);

            Form f2 = new Form2(); //Form2 클래스의 객체 f2를 생성
            this.AddOwnedForm(f2); //AddOwnedForm : 다른 폼을 현재 폼에 추가시킴

            f2.Show();
        }
    }
}