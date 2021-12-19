using System;
using System.Windows;
using System.Windows.Controls;

namespace W004_Language
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        CheckBox[] cbs;
        public MainWindow()
        {
            InitializeComponent();
            cbs = new CheckBox[] { cbC, cbCPP, cbCS, cbPy, cbJava };
        }

        private void btnSubmit_Click(object sender, RoutedEventArgs e)
        {
            String str = string.Empty;

            foreach(var cb in cbs)
            {
                if (cb.IsChecked == true)
                    str += cb.Content + " ";
            }

            MessageBox.Show(str + "Selected!", "Language Prefered!");
        }

        private void btnQuit_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}
