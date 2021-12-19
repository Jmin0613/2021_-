using System;
using System.Windows.Forms;

namespace _6주차_만들어보기
{
    public partial class Form1 : Form
    {
        private Subject[] subjects; // 교과목 Subject의 배열
        private TextBox[] txtTitles; // 과목명 TextBox의 배열
        private TextBox[] txtCredits; // 학점 TextBox의 배열
        private ComboBox[] grades; // 성적 ComboBox의 배열

        public Form1()
        {
            InitializeComponent();

            subjects = new Subject[] // 초기화
            {
                new Subject{Title="자료구조", Credit=3 },
                new Subject("비주얼프로그래밍", 3),//단순화
                new Subject("컴퓨터구조", 3),
                new Subject("프로그래밍1", 3),
                new Subject("프로그래밍실습 1", 2),
                new Subject("일반수학1", 3),
                new Subject("영어1", 2)
            };

            txtTitles = new TextBox[7] // 초기화
            {
                textBox1, textBox2, textBox3,
                textBox4, textBox5, textBox6, textBox7
            };

            txtCredits = new TextBox[7] // 초기화
            {
                txt1, txt2, txt3,
                txt4, txt5, txt6, txt7
            };

            grades = new ComboBox[7] // 초기화
            {
                comboBox1, comboBox2, comboBox3,
                comboBox4, comboBox5, comboBox6, comboBox7
            };

            for (int i = 0; i < subjects.Length; i++)
            {
                // 클래스 배열 subjects에 저장된 값을 옮겨줌
                txtTitles[i].Text = subjects[i].Title;
                txtCredits[i].Text = subjects[i].Credit.ToString(); //스트링값으로 바꿔서 보냄
            }

            foreach(var cb in grades) // 콤보박스 항목 추가
            {
                cb.Items.Add("A+");
                cb.Items.Add("A0");
                cb.Items.Add("B+");
                cb.Items.Add("B0");
                cb.Items.Add("C+");
                cb.Items.Add("C0");
                cb.Items.Add("F");
            }
        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            double totalScore = 0;
            int totalCredits = 0;

            for (int i = 0; i < grades.Length; i++)
            {
                //만약 학점 콤보박스의 값이 선택되었다면
                if (grades[i].SelectedItem != null)
                {
                    int crd = int.Parse(txtCredits[i].Text); //학점
                    totalCredits += crd;
                    totalScore += crd * GetGreade(grades[i].SelectedItem.ToString());
                }
            }
            txtResult.Text = (totalScore / totalCredits).ToString("0.00"); //소수점 두자리
        }

        private double GetGreade(string v)
        {
            if (v == "A+") return 4.5;
            else if (v == "A0") return 4.0;
            else if (v == "B+") return 3.5;
            else if (v == "B0") return 3.0;
            else if (v == "C+") return 2.5;
            else if (v == "C0") return 2.0;
            else if (v == "D+") return 1.5;
            else if (v == "D0") return 1.0;
            else return 0;
        }
    }
}
