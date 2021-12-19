using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace b011
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[10];
            Random r = new Random();
            for (int i = 0; i < 10; i++)
                a[i] = r.Next(100);

            foreach (var v in a)
                Console.Write("{0,5}\t", v);
            Console.WriteLine();

            for(int i=9;i>0;i--)
                for(int j=0;j<i;j++)
                    if (a[j] > a[j + 1])
                    {
                        int t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }

            foreach (var v in a)
                Console.Write("{0,5}\t", v);  //첫번째 값을 5칸으로 출력
            Console.WriteLine();
        }
    }
}
