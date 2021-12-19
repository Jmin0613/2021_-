using System;
using System.Windows;
using System.Data;
using System.Data.SqlClient;

namespace W014_2Login
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        string connStr = @"Data Source=(LocalDB)\MSSQLLocalDB;"
+@"AttachDbFilename=C:\Users\jumin\OneDrive\바탕 화면\기말 비주얼(강의)\W014_2Login\W014_2Login\Login.mdf;"
+@"Integrated Security=True";

        public MainWindow()
        {
            InitializeComponent();
        }

        //로그인 버튼 클릭 이벤트
        private void btnLogin_Click(object sender, RoutedEventArgs e)
        {
            SqlConnection conn = new SqlConnection(connStr);
            if (conn.State == ConnectionState.Closed)
                conn.Open();

            //이 조건에 맞아서 전체 가져오는 카운트가 몇개인지 보여줌
            string sql = string.Format("SELECT COUNT(*) FROM LoginTable "
                + "WHERE UerName='{0}' AND Password='{1}'",
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
