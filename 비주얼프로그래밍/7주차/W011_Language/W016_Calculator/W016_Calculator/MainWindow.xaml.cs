using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace W016_Calculator
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        private bool opFlag = false; //true:연산자버튼 클릭된 직후, false:아닌 경우
        private double saved = 0; //연산자버튼이 클릭될 때 txtResult에 있던 값
        private string op = string.Empty;
        private double memory = 0; //메모리

        public MainWindow()
        {
            InitializeComponent();

            btnMR.IsEnabled = false; //비활성
            btnMC.IsEnabled = false;
        }

        //숫자버튼을 처리
        private void btn_Click(object sender, RoutedEventArgs e)
        {
            Button btn = sender as Button;

            if (txtResult.Text == "0" || opFlag == true)
            {
                txtResult.Text = btn.Content.ToString();
                opFlag = false;
            }
            else
                txtResult.Text += btn.Content.ToString();
        }

        //소수점 처리
        private void btnDot_Click(object sender, RoutedEventArgs e)
        {
            if (txtResult.Text.Contains("."))
                return;
            else
                txtResult.Text += ".";
        }

        //PlusMinus 처리
        private void btnPlusMinus_Click(object sender, RoutedEventArgs e)
        {
            double v = double.Parse(txtResult.Text);
            v = -v;
            txtResult.Text = v.ToString();
        }

        //사칙연산자 클릭될 때 처리
        private void Op_Click(object sender, RoutedEventArgs e)
        {
            opFlag = true; //숫자를 새로 써주기 위해
            saved = double.Parse(txtResult.Text);

            Button btn = sender as Button;
            op = btn.Content.ToString(); //+,-,*,/를 op가 가짐

            txtExp.Text += txtResult.Text + " " + op;
        }

        // = 버튼 처리
        private void btnEqual_Click(object sender, RoutedEventArgs e)
        {
            double v = double.Parse(txtResult.Text);
            switch(op)
            {
                case "＋" :
                    txtResult.Text = (saved + v).ToString();
                    break;
                case "－" :
                    txtResult.Text = (saved - v).ToString();
                    break;
                case "×" :
                    txtResult.Text = (saved * v).ToString();
                    break;
                case "÷":
                    txtResult.Text = (saved / v).ToString();
                    break;
            }
            txtExp.Text = saved + " " + op + v + " =";
        }

        private void btnRecip_Click(object sender, RoutedEventArgs e)
        {
            txtExp.Text = "1 / (" + txtResult.Text + ")";
            txtResult.Text = (1 / double.Parse(txtResult.Text)).ToString();
        }

        private void btnSqrt_Click(object sender, RoutedEventArgs e)
        {
            txtExp.Text = "√(" + txtResult.Text + ")";
            txtResult.Text = (Math.Sqrt(double.Parse(txtResult.Text))).ToString();
        }

        private void btnSqr_Click(object sender, RoutedEventArgs e)
        {
            txtExp.Text = "sqr(" + txtResult.Text + ")";
            txtResult.Text = (double.Parse(txtResult.Text) * double.Parse(txtResult.Text)).ToString();
        }

        private void btnCE_Click(object sender, RoutedEventArgs e)
        {
            txtResult.Text = "0";
        }

        //초기화
        private void btnC_Click(object sender, RoutedEventArgs e)
        {
            txtResult.Text = "0";
            txtExp.Text = "";
            saved = 0;
            op = "";
            opFlag = false;
        }

        //맨 뒤의 글자 하나 지우기
        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            txtResult.Text = txtResult.Text.Remove(txtResult.Text.Length - 1);
            if (txtResult.Text.Length == 0)
                txtResult.Text = "0";
        }

        private void btnMC_Click(object sender, RoutedEventArgs e)
        {
            memory = 0;
            btnMC.IsEnabled = false;
            btnMR.IsEnabled = false;
        }

        private void btnMR_Click(object sender, RoutedEventArgs e)
        {
            txtResult.Text = memory.ToString();
        }

        private void btnMPlus_Click(object sender, RoutedEventArgs e)
        {
            memory += double.Parse(txtResult.Text);
        }

        private void btnMMinus_Click(object sender, RoutedEventArgs e)
        {
            memory -= double.Parse(txtResult.Text);
        }

        private void btnMS_Click(object sender, RoutedEventArgs e)
        {
            memory = double.Parse(txtResult.Text);
            btnMC.IsEnabled= true;
            btnMR.IsEnabled = true;
        }

        private void End_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}
