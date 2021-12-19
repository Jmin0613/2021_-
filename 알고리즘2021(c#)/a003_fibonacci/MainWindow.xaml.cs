using System.Windows;

namespace a003_fibonacci
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
            //재귀
            int n = int.Parse(txtNo.Text);
            listBox.Items.Clear();

            listBox.Items.Add("Recursive Fibonacci");

            //시간측정
            var watch = System.Diagnostics.Stopwatch.StartNew();
            for(int i = 1; i <= n; i++)
            {
                listBox.Items.Add(Fibonacci(i));
            }
            watch.Stop();
            var elap = watch.ElapsedTicks;
            listBox.Items.Add("Tics = " + elap + " , ms = " + watch.ElapsedMilliseconds);

            //반복
            int[] fibo = new int[101];
            watch = System.Diagnostics.Stopwatch.StartNew();
            for (int i =1; i <= n; i++)
            {
                if (i == 1 || i == 2)
                    fibo[i] = 1;
                else
                    fibo[i] = fibo[i - 1] + fibo[i - 2];
            }
            watch.Stop();
            elap = watch.ElapsedTicks;

            listBox.Items.Add("Loop Fibonacci");
            for (int i = 1; i < n; i++)
            {
                listBox.Items.Add(fibo[i]);
            }
            listBox.Items.Add("Tics = " + elap + " , ms = " + watch.ElapsedMilliseconds);
        }

        private int Fibonacci(int i)
        {
            if (i == 1 || i == 2)
                return 1;
            else
                return Fibonacci(i - 1) + Fibonacci(i - 2);
        }
    }
}
