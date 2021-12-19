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

namespace W011_Language
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        CheckBox[] cbs; //배열선언
        public MainWindow()
        {
            InitializeComponent();
            cbs = new CheckBox[] { cbC, cbCPP, cbCS, cbPy, cbJava }; //초기화
        }
        //제출하기
        private void btnSubmit_Click(object sender, RoutedEventArgs e)
        {
            string str = string.Empty;

            foreach(var cb in cbs)
            {
                if(cb.IsChecked == true)
                    str += cb.Content + " ";
            }
            MessageBox.Show(str + "Selected!", "Language Prefered!");
        }
        //끝내기
        private void btnQuit_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}
