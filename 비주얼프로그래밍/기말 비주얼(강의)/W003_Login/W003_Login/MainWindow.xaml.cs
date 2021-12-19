using System.Windows;

namespace W003_Login
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

        private void btnLogin_Clicked(object sender, RoutedEventArgs e)
        {
            if (txtId.Text == "abcd" && txtPassword.Password == "1234")
                MessageBox.Show("Login Successful!");
            else
                MessageBox.Show("Login Failed!");
        }
    }
}
