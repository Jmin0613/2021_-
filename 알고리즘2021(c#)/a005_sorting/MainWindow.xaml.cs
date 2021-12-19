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

namespace a005_sorting
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        static int MAX = 100000;
        int[] a = new int[100000];
        int N = 0; //데이터 갯수

        public MainWindow()
        {
            InitializeComponent();
            txtNo.Text = "200";
        }

        //난수 생성
        private void btnRandom_Copy_Click(object sender, RoutedEventArgs e)
        {
            N = int.Parse(txtNo.Text);
            Random r = new Random();

            if (N >= MAX)
            {
                MessageBox.Show("입력 데이터 갯수의 한계를 넘어섰습니다(한계 : 10만)");
                return; //처음 상태로 돌아가기, 안쓰면 종료됨
            }
            for (int i = 0; i < N; i++)
            {
                a[i] = r.Next(MAX); //MAX값까지 랜덤값 생성 (생성되는 값의 범위)
            }
        }


        //버블 정렬
        private void btnBouble_Click(object sender, RoutedEventArgs e)
        {
            BubbleSort();
        }

        private void BubbleSort()
        {
            Print();
            for (int i = N - 1; i > 0; i--) 
            {
                for(int j = 0; j < i; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        int t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                }
            }
            Print();
        }

        private void Print()
        {
            for (int i = 0; i < N; i++)
            {
                Console.Write(a[i] + ", ");
            }
            Console.WriteLine(); //줄 개행
        }

        //퀵 정렬
        private void btnQuick_Click(object sender, RoutedEventArgs e)
        {
            Print();
            QuickSort(a, 0, N - 1);
            Print();
        }

        private void QuickSort(int[] a, int left, int right)
        {
            if (left < right)
            {
                int q = Partition(a, left, right);
                QuickSort(a, left, q - 1);
                QuickSort(a, q + 1, right);
            }
        }

        private int Partition(int[] a, int left, int right)
        {
            int low = left;
            int high = right + 1; //+1하는 이유 : 처음에 피봇때문에 하나 줄어들어서
            int pivot = a[left];

            do
            {
                do
                {
                    low++; //low가 증가하다보면 배열을 나감 -> low의 크기를 제한
                } while (low <=right && a[low] < pivot);
                do
                {
                    high--;
                } while (high >= left && a[high] >pivot);

                if(low < high)
                {
                    int t = a[high];
                    a[high] = a[low];
                    a[low] = t;
                }
            } while (low < high);

            //피봇과 a[high] 교환
            a[left] = a[high];
            a[high] = pivot;

            return high;
        }

        //합병 정렬
        private void btnMerge_Click(object sender, RoutedEventArgs e)
        {
            Print();
            MergeSort(a,0,N-1);
            Print();
        }

        private void MergeSort(int[] a, int left, int right)
        {
            if (left < right)
            {
                int mid = (left + right) / 2;
                MergeSort(a, left, mid);
                MergeSort(a, mid + 1, right);
                Merge(a, left, mid, right);
            }
        }

        private void Merge(int[] a, int left, int mid, int right)
        {
            int[] sorted = new int[MAX];

            int i, j, k = left;
            for (i = left, j = mid + 1; i <= mid && j <= right;) 
            {
                sorted[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
            }
            if (i > mid)
            { //왼쪽이 끝나고, 오른쪽 나머지를 복사
                for (int l = j; l <= right; l++)
                    sorted[k++] = a[l];
            }
            else //오른쪽이 끝나서, 왼쪽 나머지를 복사
            {
                for (int l = i; l <= mid; l++)
                    sorted[k++] = a[l];
            }

            //정령된 sorted[]을 a[]로 복사
            for (int l = left; l <= right; l++)
                a[l] = sorted[l];
        }

        //시간 측정
        private void btnTime_Click(object sender, RoutedEventArgs e)
        {
            var watch = System.Diagnostics.Stopwatch.StartNew();
            BubbleSort();
            watch.Stop();
            long tickBubble = watch.ElapsedTicks;
            txtBouble.Text = "버블 정렬 : " + tickBubble + " Ticks, " +
                tickBubble / 10000.0 + " ms";

            // 다시 랜덤 배열 만들기
            Random r = new Random();
            for (int i = 0; i < N; i++)
            {
                a[i] = r.Next(MAX); //MAX값까지 랜덤값 생성 (생성되는 값의 범위)
            }
            watch = System.Diagnostics.Stopwatch.StartNew();
            QuickSort(a,0,N-1);
            watch.Stop();
            long tickQuick = watch.ElapsedTicks;
            txtQuick.Text = "퀵 정렬 : " + tickQuick + " Ticks, " +
                tickQuick / 10000.0 + " ms";

            // 다시 랜덤 배열 만들기
            for (int i = 0; i < N; i++)
            {
                a[i] = r.Next(MAX); //MAX값까지 랜덤값 생성 (생성되는 값의 범위)
            }
            watch = System.Diagnostics.Stopwatch.StartNew();
            MergeSort(a, 0, N - 1);
            watch.Stop();
            long tickMerge = watch.ElapsedTicks;
            txtMerge.Text = "병합 정렬 : " + tickMerge + " Ticks, " +
                tickMerge / 10000.0 + " ms";
        }
    }
}
