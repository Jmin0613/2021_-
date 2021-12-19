using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace A143_GradeCalc
{
    public partial class Form1 : Form
    {
        TextBox[] titles; //교과목 TextBox 배열
        ComboBox[] crds; //학점 ComboBox 배열
        ComboBox[] grds; //성적 ComboBox 배열

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            txt1.Text = "인체의구조와기능1";
            txt2.Text = "일반수학1";
            txt3.Text = "디지털공학및실험";
            txt4.Text = "자료구조";
            txt5.Text = "비주얼프로그래밍";
            txt6.Text = "기업가정신";

            crds = new ComboBox[] { crd1, crd2, crd3, crd4, crd5, crd6, crd7 };
            grds = new ComboBox[] { grd1, grd2, grd3, grd4, grd5, grd6, grd7 };
            titles = new TextBox[] { txt1, txt2, txt3, txt4, txt5, txt6, txt7 };
            int[] arrCredit = { 1, 2, 3, 4, 5 };
            List<string> lstGrade = new List<string>
            {
                "A+", "A0","B+","B0","C+","C0","D+","D0","F"
            };

            foreach (var Combo in crds) //credits
            {
                foreach (var i in arrCredit)
                    Combo.Items.Add(i);
                Combo.SelectedItem = 3; //최초에 3을 SelectedItem으로 지정(3학점 수업이 많아서)
            }

            foreach(var cb in grds) //grades
            {
                foreach (var gr in lstGrade)
                    cb.Items.Add(gr);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double totalScore = 0; // 각 과목 학점수*성적
            int totalCredits = 0; // 학점수의 합

            for (int i =0;i<crds.Length;i++)
            {
                if (titles[i].Text != "")
                {
                    int crd = int.Parse(crds[i].SelectedItem.ToString());
                    totalCredits += crd;
                    totalScore += crd * GetGrade(grds[i].SelectedItem.ToString());
                }
            }
            txtGrade.Text = (totalScore / totalCredits).ToString("0.00");
        }

        private int GetGrade(string v)
        {
            double grade = 0;

            if (Text == "A+") grade = 4.5;
            else if (Text == "A0") grade = 3.5;
            else if (Text == "B+") grade = 3.0;
            else if (Text == "B0") grade = 2.5;
            else if (Text == "C+") grade = 2.0;
            else if (Text == "C0") grade = 1.5;
            else grade = 0;
            return grade;
        }
    }
}
