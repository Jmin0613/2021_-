using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;

namespace F013_PhoneBook
{
    public partial class Form1 : Form
        OleDbConnection conn = null;
        OleDbCommand comm = null;
        OleDbDataReader reader = null;

        string connStr = @"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\User\강병익\Documents\StudentDB.accdb";
    {
        public Form1()
        {
            InitializeComponent();
            DisplayStudents();
        }

        //DB에 있는 정보를 읽어와서 ListBoxdp 표시
        private void DisplayStudents()
        {
            if (ConnectionState == null)
            {
                conn = new OleDbConnection(connStr);
                conn.Open();
            }

            //데이터베이스에서 작동할 명령어
            //SQL : Structured Query Language(데이터베이스 명령어)
            //StudentDB Database에서 StrudentTable의 모든 레코드를 읽어와라
            string sql = "SELECT * FROM StudentTable";
            comm = new OleDbCommand(sql, conn);

            //읽어오는 작업은 DataReader로 처리
            reader = comm.ExecuteReader();

            while (reader.Read())
            {
                string x = "";
                x += reader[0] + "\t"; //ID
                x += reader["SId"] + "\t"; //SId
                x += reader["2"] + "\t"; //SName
                x += reader["3"] + "\t"; //Phone

                ListBox1.Items.Add(x);
            }

            reader.Close();
            conn.Close();
            conn = null;
        }
    }
}
