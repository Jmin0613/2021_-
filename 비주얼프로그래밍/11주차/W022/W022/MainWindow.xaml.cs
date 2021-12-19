using System;
using System.Windows;
using System.Data;
using System.Data.SqlClient;

namespace W022
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        string connStr = @"Data Source=(LocalDB)\MSSQLLocalDB;"
+@"AttachDbFilename=C:\Users\user\Desktop\11주차\W022\W022\Login.mdf;Integrated Security=True";
        //데이터베이스에 접근하기 위해 커넥션스트링 필요
        public MainWindow()
        {
            InitializeComponent();
        }


        //커넥션 열기 -> 로그인 버튼 클릭 이벤트
        private void btnLogin_Click(object sender, RoutedEventArgs e)
        {
            SqlConnection conn = new SqlConnection(connStr);
            if (conn.State == ConnectionState.Closed)
                conn.Open();

            string sql = string.Format("SELECT COUNT(*) FROM LoginTable"
                + "WHERE UserNAME ='{0}' AND Password='{1}'",
                txtUserName.Text, txtPassword.Password);

            SqlCommand comm = new SqlCommand(sql, conn);
            int count = Convert.ToInt32(comm.ExecuteScalar()); //object를 int로 변환

            if (count == 1)
                MessageBox.Show("로그인 성공!");
            else
                MessageBox.Show("로그인 실패!");

            conn.Close();
        }
    }
}