using System.Windows;
using System.Windows.Input;
using System.Windows.Media;

namespace W002_HelloWorld2
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

        private void TextBlock_MouseDown(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show("TextBlock이 클릭됨", "TextBlock Clicked");
            if (grid1.Background == Brushes.Orange) // Brushes.("색상")
                grid1.Background = Brushes.AliceBlue;
            else
                grid1.Background = Brushes.Orange;
        }
    }
}
