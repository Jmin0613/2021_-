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

namespace W003_BMI
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void btnBMI_Click(object sender, RoutedEventArgs e)
        {
            if (txtHeight.Text == "" || txtWeight.Text == "")
            {
                lblResult.Text = "키와 체중을 입력";
                return;
            }

            double h = double.Parse(txtHeight.Text) / 100;
            double w = double.Parse(txtWeight.Text);
            double bmi = w / (h * h);

            //lblResult.Text = "당신의 BMI는 " + bmi + "입니다.";
            lblResult.Text = string.Format("당신의 BMI는 {0:F2}입니다.",bmi);
        }
    }
}
