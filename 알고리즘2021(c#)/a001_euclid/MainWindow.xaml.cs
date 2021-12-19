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

namespace a001_euclid
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            int x = int.Parse(txtNo1.Text);
            int y = int.Parse(txtNo2.Text);
            int gcd = Euclid(x, y);
            txtResult.Text = "쵀대공약수 = " + gcd.ToString();
        }

        private int Euclid(int x, int y)
        {
            if (y == 0)
                return x;
            else
                return Euclid(y, x % y);
        }
    }
}
