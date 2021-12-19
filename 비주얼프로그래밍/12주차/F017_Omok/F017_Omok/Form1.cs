using System;
using System.Drawing;
using System.Windows.Forms;

namespace F017_Omok
{
    public partial class Form1 : Form
    {
        private int margin = 40;
        private int 눈size = 30;
        private int 돌size = 28;
        private int 화점size = 10;

        Graphics g;
        Pen pen;
        Brush wBrush, bBrush;

        enum STONE {none, black, white};
        private STONE[,] 바둑판 = new STONE[19, 19];
        bool flag = false; //false:흑, true:백
        private bool imageFlag = false; //false:그리기, true:이미지

        public Form1()
        {
            InitializeComponent();

            this.BackColor = Color.Orange;
            pen = new Pen(Color.Black);
            wBrush = new SolidBrush(Color.White);
            bBrush = new SolidBrush(Color.Black);

            this.ClientSize = new Size(2 * margin + 18 * 눈size, 2 * margin + 18 * 눈size + menuStrip1.Height);

            DrawBoard(); // OnPaint 함수에서 호출함
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);
            DrawBoard();
        }

        private void panel1_MouseDown(object sender, MouseEventArgs e)
        {
            //e.X, e.Y는 마우스에서 전달하는 좌표
            //x, y는 변환된 바둑판 좌표
            int x = (e.X - margin + 눈size / 2) / 눈size;
            int y = (e.Y - margin + 눈size / 2) / 눈size;

            if (바둑판[x, y] != STONE.none)
                return;
            Rectangle r = new Rectangle(margin + 눈size * x - 돌size / 2,
                margin + 눈size * y - 돌size / 2, 돌size, 돌size);

            //검은돌 차례
            if (flag == false)
            {
                if (imageFlag == false)
                {
                    g.FillEllipse(bBrush, r);
                }
                else
                {
                    Bitmap bmp = new Bitmap("../../Images/black.png");
                    g.DrawImage(bmp, r);
                }
                g.FillEllipse(bBrush, r);
                flag = true;
                바둑판[x, y] = STONE.black;
            }
            else //흰돌 차례
            {
                if (imageFlag == false)
                {
                    g.FillEllipse(wBrush, r);
                }
                else
                {
                    Bitmap bmp = new Bitmap("../../Images/white.png");
                    g.DrawImage(bmp, r);
                }
                g.FillEllipse(wBrush, r);
                flag = false;
                바둑판[x, y] = STONE.white;
            }
        }

        private void 이미지ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            imageFlag = true;
        }

        private void 그리기ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            imageFlag = false;
        }

        private void DrawBoard()
        {
            g = panel1.CreateGraphics();
            for (int i = 0; i < 19; i++)
            {
                g.DrawLine(pen, new Point(margin + i * 눈size, margin),
                    new Point(margin + i * 눈size, margin + 18 * 눈size)); //세로선
                g.DrawLine(pen, new Point(margin, margin + i * 눈size),
                    new Point(margin + 18 * 눈size, margin + i * 눈size)); //가로선
            }

            //화점 그린다(3,9,15)
            for(int x =3;x<=15;x+=6)
                for(int y = 3; y <= 15; y += 6)
                {
                    g.FillEllipse(bBrush,
                        margin + 눈size * x - 화점size / 2,
                        margin + 눈size * y - 화점size / 2,
                        화점size, 화점size);
                }

            Rectangle r = new Rectangle(10, 10, 10, 10);
            g.FillEllipse(Brushes.Red, r);
        }
    }
}
