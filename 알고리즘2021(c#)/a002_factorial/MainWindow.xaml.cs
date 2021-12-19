using System.Windows;

namespace a002_factorial
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
            int x = int.Parse(txtNo.Text);

            var watch = System.Diagnostics.Stopwatch.StartNew();
            long rfact = rFactorial(x);
            watch.Stop();

            var elap = watch.ElapsedTicks;
            string result = "Ticks = " + elap;
            listBox.Items.Add(result);

            watch = System.Diagnostics.Stopwatch.StartNew();
            long fact = factorial(x);
            watch.Stop();
            result = "Ticks = " + elap;
            listBox.Items.Add(result);

            listBox.Items.Add("Recursive : " + rfact);
            listBox.Items.Add("반복문 : " + fact);
        }

        private long factorial(int x)
        {
            long f = 1;
            for (int i = 2; i <= x; i++)
                f *= i;
            return f;
        }

        private long rFactorial(int x)
        {
            if (x == 1)
                return 1;
            else
                return rFactorial(x - 1) * x;
        }
    }
}
