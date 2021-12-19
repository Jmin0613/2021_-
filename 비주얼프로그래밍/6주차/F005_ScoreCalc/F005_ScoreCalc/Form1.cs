using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace F005_ScoreCalc
{
    public partial class Form1 : Form
    {
        private Subject[] subjects; // 교과목 Subject의 배열 (객체)
        private TextBox[] txtTitles; // 과목명 TextBox의 배열 (컨트롤)
        private TextBox[] txtCredits; // 학점TextBox의 배열 (컨트롤)
        private ComboBox[] grades; // 성적 ComboBox의 배열 (컨트롤)

        public Form1()
        {
            InitializeComponent();

            subjects = new Subject[] {
                new Subject{ Title="자료구조", Credit=3},
                new Subject("비주얼프로그래밍", 3),
                new Subject("컴퓨터구조", 3),
                new Subject("설계 및 프로젝트기본1", 2),
                new Subject("기업가 정신과 리더쉽", 2),
                new Subject("영어1", 2),
                new Subject("인체의 구조와 기능1", 2),
                new Subject("중점교양", 2)
            };

            txtTitles = new TextBox[10]
            {
                textBox1, textBox2, textBox3, textBox4, textBox5,
                textBox6, textBox7, textBox8, textBox9, textBox10
            };

            txtCredits = new TextBox[10]
            {
                text11, text12, text13, text14, text15,
                text16, text17, text18, text19, text20
            };

            grades = new ComboBox[10] 
            {
                comboBox1,comboBox2, comboBox3, comboBox4, comboBox5,
                comboBox6, comboBox7, comboBox8,comboBox9, comboBox10
            };

            for (int i=0; i < subjects.Length; i++)
            {
                txtTitles[i].Text = subjects[i].Title;
                txtCredits[i].Text = subjects[i].Credit.ToString(); // 스트링값으로 바꿔서 보내줌
            }

            foreach(var cb in grades)
            {
                cb.Items.Add("A+");
                cb.Items.Add("A0");
                cb.Items.Add("B+");
                cb.Items.Add("B0");
                cb.Items.Add("C+");
                cb.Items.Add("C0");
                cb.Items.Add("D+");
                cb.Items.Add("D0");
                cb.Items.Add("F");
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            double totalScore = 0;
            int totalCredits = 0;

            for (int i = 0; i < grades.Length; i++)
            {
                // 만약 학점 콤보박스의 값이 선택되었다면
                if (grades[i].SelectedItem != null)
                {
                    int crd = int.Parse(txtCredits[i].Text); // 학점
                    totalCredits += crd;
                    totalScore += crd * GetGrade(grades[i].SelectedItem.ToString());
                }
            }
            txtResult.Text = (totalScore / totalCredits).ToString("0.00"); // 소수점 두자리
        }

        private double GetGrade(string v)
        {
            if (v == "A+") return 4.5;
            else if (v == "A0") return 3.5;
            else if (v == "B+") return 3.0;
            else if (v == "B0") return 2.0;
            else if (v == "C+") return 1.5;
            else if (v == "C0") return 1.0;
            else return 0;
        }
    }
}