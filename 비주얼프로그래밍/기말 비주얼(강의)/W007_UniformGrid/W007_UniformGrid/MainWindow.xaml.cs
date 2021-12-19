using System.Windows;
using System.Windows.Media;
using System.Windows.Shapes;

namespace W007_UniformGrid
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            ChessBoard.Rows = 8;
            ChessBoard.Columns = 8;

            for (int i = 0; i < 64 / 2; i++)
            {
                // 짝수줄은 검은색, 빨간색
                // 홀수줄은 빨간색, 검은색
                if ((i / 4) % 2 == 0) // 짝수줄
                {
                    Rectangle r1 = new Rectangle();
                    r1.Fill = Brushes.Black;
                    ChessBoard.Children.Add(r1);

                    Rectangle r2 = new Rectangle();
                    r2.Fill = Brushes.Red;
                    ChessBoard.Children.Add(r2);
                }
                else // 홀수줄
                {
                    Rectangle r2 = new Rectangle();
                    r2.Fill = Brushes.Red;
                    ChessBoard.Children.Add(r2);

                    Rectangle r1 = new Rectangle();
                    r1.Fill = Brushes.Black;
                    ChessBoard.Children.Add(r1);
                }
            }
        }
    }
}
