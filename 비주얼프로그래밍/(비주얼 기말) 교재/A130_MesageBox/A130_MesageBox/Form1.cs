using System;
using System.Windows.Forms;

namespace A130_MesageBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // (1) The simplest overload of MesageBox.Show
            MessageBox.Show("가장 간단한 메시지 박스입니다."); //메세지만 출력

            // (2) Dialog box with text and a title
            MessageBox.Show("타이틀을 갖는 메세지 박스입니다.", "Title Message");
            //메세지와 타이틀 이름 출력
            // MessageBox.Show("메세지내용", "타이틀 이름");

            // (3) Dialog box with exclamtion icon
            MessageBox.Show("느낌표와 알람 메시지 박스입니다.",
                "느낌표와 알람소리",
                MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
            //메세지와 타이틀 이름, 알람소리 및 아이콘 출력
            // MessageBox.Show("메세지내용", "타이틀이름", "아이콘표시/소리종류");

            // (4) Dialog box with two buttons :  yes and no
            DialogResult result1 = MessageBox.Show("두개의 버튼을 갖는 메세지 박스입니다.",
                "Question", MessageBoxButtons.YesNo);
            //메세지와 타이틀 이름, 버튼2개 출력
            // MessageBox.Show("메세지 내용", "타이틀 이름", "버튼 개수");

            // (5) Dialog box with question icon
            DialogResult result2 = MessageBox.Show("세 개의 버튼과 물음표 아이콘을 보여주는 메시지 박스입니다.",
                "Question", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
            //메세지와 타이틀 이름, 버튼3개 및 아이콘 출력
            // MessageBox.Show("메세지 내용", "타이틀 이름", "버튼 개수", "아이콘표시/소리종류");

            // (6) Dialog box with question icon and default button
            DialogResult result3 = MessageBox.Show("디폴트 버튼을 두 번째 버튼으로\n지정한 메시지박스입니다.",
                "Question", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question,
                MessageBoxDefaultButton.Button2);
            //메세지와 타이틀 이름, 버튼3개 및 아이콘 출력 + 디폴트 설정
            // MessageBox.Show("메세지 내용", "타이틀 이름", "버튼 개수", "아이콘표시/소리종류", "디폴트 설정");

            string msg = string.Format("당신의 선택 : {0}, {1}, {2}",
                result1.ToString(), result2.ToString(), result3.ToString());
            // (7) 선택결과를 보여주는 메시지입니다.
            MessageBox.Show(msg, "Your Selection");
        }
    }
}
