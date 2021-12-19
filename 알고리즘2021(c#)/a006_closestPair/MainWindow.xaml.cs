using System;
using System.Collections;
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

namespace a006_closestPair
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    /// 

    // IComparer라는 Sort를 위한 Interface를 정의
    public class XComparer : IComparer
    {
        public int Compare(object x, object y)
        {
            return (int)(((Point)x).X - ((Point)y).X);
        }
    }

    public class YComparer : IComparer
    {
        public int Compare(object x, object y)
        {
            return (int)(((Point)x).Y - ((Point)y).Y);
        }
    }

    public partial class MainWindow : Window
    {
        static int P = 500; // 점의 갯수
        Point[] points = new Point[P]; // point 구조체

        public MainWindow()
        {
            InitializeComponent();
        }

        private PointPair Button_Click(object sender, RoutedEventArgs e)
        {
            Random r = new Random();
            for (int i = 0; i < P; i++) 
            {
                points[i].X = r.Next(1300);
                points[i].Y = r.Next(800);
            }

            XComparer xComp = new XComparer();
            Array.Sort(points, xComp);
            PrintPoints();

            // 기존에 그려진 점 지우기
            canvas.Children.Clear();

            // canvas에 점 그려주기
            foreach(var p in points)
            {
                Rectangle rect = new Rectangle(); //rectange 
                rect.Width = 3;
                rect.Height = 3;
                rect.Stroke = Brushes.Black;
                Canvas.SetLeft(rect, p.X - 1);
                Canvas.SetTop(rect, p.Y - 1);

                canvas.Children.Add(rect);
            }
        }

        private void PrintPoints()
        {
            foreach (var p in points)
                Console.WriteLine("({0},{1})", p.X, p.Y);
        }

        private void btnBruteForce_Click(object sender, RoutedEventArgs e)
        {
            PointPair pp = AlgorithmN2(points, 0, P - 1);
            // 가장 가까운 점의 쌍을 저장한 객체를 이용하여
            // 출력과 그림에 표시

            HighLight(pp);
        }

        private void HighLight(PointPair pp)
        {
            Line line = new Line();
            line.X1 = pp.p1.X;
            line.Y1 = pp.p1.Y;
            line.X2 = pp.p2.X;
            line.Y2 = pp.p2.Y;
            line.Stroke = Brushes.Red;
            line.StrokeThickness = 3;
            canvas.Children.Add(line);

            MessageBox.Show(string.Format("최단거리의 점의 쌍 : ({0},{1})-({2},{3}) = {4}",
                pp.p1.X, pp.p1.Y, pp.p2.X, pp.p2.Y, pp.d));
        }

        private PointPair AlgorithmN2(Point[] a, int left, int right)
        {
            // points[i]와 points[j]의 거리를 계산해서
            // 가장 가까운 점의 쌍을 찾아낸다.
            double min = double.MaxValue;
            int p1 = 0, p2 = 0; // 최근접 점의 쌍의 points[]배열에서의 인덱스

            for (int i = left; i < right; i++) 
            {
                for (int j = i + 1; j < right; j++) 
                {
                    if (Dist(i, j) < min)
                    {
                        // 최근 점의 쌍을 구한다.
                        // 거리와 두 점을 저장한다.
                        min = Dist(i, j);
                        p1 = i;
                        p2 = j;
                    }
                }
            }
            PointPair p = new PointPair(min, a[p1], a[p2]);
            return p;
        }

        // point[i]와 points[j]의 거리를 계산해서 리턴한다.
        private double Dist(int i, int j)
        {
            return Math.Pow(points[i].X - points[j].X, 2)
                + Math.Pow(points[i].Y - points[j].Y, 2);
        }

        // 분할정복으로 최근접 점의 쌍을 찾는 알고리즘 
        private void btnDivideConquer_Click(object sender, RoutedEventArgs e)
        {
            PointPair cP = ClosestPair(points, 0, P - 1);
            HighLight(cP);
        }

        private PointPair ClosestPair(Point[] points, int left, int right)
        {
            if (right - left <= 10)
                return AlgorithmN2(points, left, right);

            int mid = left + (right - left) / 2; //중간 포인트의 인덱스
            CenterLine(mid);

            PointPair cPL = ClosestPair(points, left, mid);
            PointPair cPR = ClosestPair(points, mid + 1, right);
            double d = Math.Min(cPL.d, cPR.d);
            PointPair cPC = FindMidRandge(points, mid, d);

            return MinPointPair(cPL, cPR, cPC);
        }

        private void CenterLine(int mid)
        {
            Line line = new Line();
            line.X1 = points[mid].X;
            line.Y1 = 0;
            line.X2 = points[mid].X;
            line.Y2 = 500;
            line.Stroke = Brushes.Blue;
            line.StrokeThickness = 1;
            canvas.Children.Add(line);
        }

        private PointPair MinPointPair(PointPair cPL, PointPair cPR, PointPair cPC)
        {
            if (cPL.d <= cPR.d && cPL.d <= cPC.d)
                return cPL;
            else if (cPC.d <= cPL.d && cPC.d <= cPR.d)
                return cPC;
            else
                return cPR;
        }

        private PointPair FindMidRandge(Point[] points, int mid, double d)
        {
            int left = 0, right = 0;

            // 중간영역의 left, right를 찾는다
            for (int i = mid - 1; i >= 0; i--)
                if (points[mid].X - points[i].X > d)
                {
                    left = i;
                    break;
                }

            for (int i = mid + 1; i < points.Length; i++)
                if (points[i].X - points[mid].X > d)
                {
                    right = i;
                    break;
                }

            PointPair p = AlgorithmN2(points, left, right);
            return p;
        }
    }
}
