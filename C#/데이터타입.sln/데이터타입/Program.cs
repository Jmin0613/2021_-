using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 데이터타입
{
    class Program
    {
        static void Main(string[] args)
        {
            //bool
            bool b = true;

            //Numeric
            short sh = -32768;
            int i = 214783647;
            long l = 1234L;
            float f = 123.45F;
            double d1 = 123.45;
            decimal d = 123.45M;

            //Char/String
            char c = 'A';
            string s = "Hello";

            //DateTime 2011-10-30 12:35
            DateTime dt = new DateTime(2011, 10, 30, 12, 35, 0);
        }
    }
}
