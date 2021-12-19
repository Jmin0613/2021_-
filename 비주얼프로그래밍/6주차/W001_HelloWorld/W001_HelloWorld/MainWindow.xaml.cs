using System.Windows;
using System.Windows.Input;
using System.Windows.Media;

namespace W001_HelloWorld
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

        }

        private void TextBlock_MouseDown_1(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show("텍스트블록이 클릭되었음.", "Text cliked");
            if (grid1.Background == Brushes.Orange)
                grid1.Background = Brushes.AliceBlue;
            else
                grid1.Background = Brushes.Orange;
        }
    }
}
