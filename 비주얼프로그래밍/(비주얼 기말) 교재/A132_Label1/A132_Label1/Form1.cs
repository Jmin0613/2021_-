using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace A132_Label1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string raffaello = "라파엘로 산치오 뭐시기 무슨 3대 거장 몇년도";
            string schoolOfAthens = "라파엘로 뭐시기는 동시대의 대가인"
                + "미켈란켈로 레오나르도 뭐시기 함께 르네상스 3개 거장으로"
                + "알려져있는데 음 가장 유명한 작품은 뭐시기 등등등 으로"
                + "어디 바티칸궁에 있는 프레스코 벽화입니다.\n";

            label1.Text = raffaello;
            label2.Text = schoolOfAthens;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            label1.Text = "";
            label2.Text = "";
        }

        
    }
}
