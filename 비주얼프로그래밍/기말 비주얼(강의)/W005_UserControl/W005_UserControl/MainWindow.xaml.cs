using System.Windows;
using System.Windows.Media;

namespace W005_UserControl
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

        private void btnRed_Click(object sender, RoutedEventArgs e)
        {
            btnColor.Background = Brushes.Red;
        }

        private void btnGreen_Click(object sender, RoutedEventArgs e)
        {
            btnColor.Background = Brushes.Green;
        }

        private void btnBlue_Click(object sender, RoutedEventArgs e)
        {
            btnColor.Background = Brushes.Blue;
        }
    }
}
