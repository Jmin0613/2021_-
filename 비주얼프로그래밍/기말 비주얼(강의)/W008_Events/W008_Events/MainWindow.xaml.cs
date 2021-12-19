using System.Windows;
using System.Windows.Input;

namespace W008_Events
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            grid1.MouseDown += Grid1_MouseDown;
        }

        private void Grid1_MouseDown(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show("1. You Clicked at me " + e.GetPosition(this).ToString());
        }

        private void grid1_MouseUp(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show("2. You Clicked at me " + e.GetPosition(this).ToString()); //겟포지션이 포인트를 리턴
        }
    }
}
