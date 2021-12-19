using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 변수의사용
{
    class program
    {
        //프로그램의 주시작점.
        static void main(string[] args)
        {
            int num = 0;
            long bignum = 5000000000000000l;
            short shortnum = 200;
            byte bytenum = 40;
            bool logic = true;
            char chr = 'a';
            string myname = "abc";
            float num2 = 35.1f;
            double num3 = 35.2450;
            system.console.writeline(bignum);

            //system네임스페이스의 console클래스의 writeline에 소드 호출
            system.console.writeline("system을 이용한 호출");
            console.writeline("hello world!");

            string money = "532";
            int money2 = 0;
            money2 = Int32.Parse(money);
            //기본int는 Int32를 사용
            //Int64 저장할 수 있는 숫자범위의 차이
            //Int64 money3= 35333333333;

            Console.WriteLine("money2는 " + money2);

            //형변환(int -> string)
            string txtmoney = "";
            txtmoney = money2.ToString();
            Console.WriteLine("txtmoney는 " + txtmoney);
        }
    }
}
