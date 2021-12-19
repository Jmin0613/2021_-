using System;
using System.Collections.Generic;

namespace C025_List
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> a = new List<int>();
            Random r = new Random();

            List<double> d = new List<double>();

            for (int i = 0; i < 10; i++)
            {
                a.Add(r.Next(100));
                d.Add(r.NextDouble());
            }

            PrintValues(a);
            PrintValues(d);

            a.Sort();
            PrintValues(a);

            d.Sort();
            PrintValues(d);

            a.RemoveAt(3);
            PrintValues(a);

            d.RemoveAt(3);
            PrintValues(d);
        }

        private static void PrintValues<T>(List<T> a)
        {
            Console.WriteLine("Count = {0,8}", a.Count);

            // 정수면 6자ㅣ, 실수면 6자리에 소수점 아래 3자리로 출력
            foreach (var i in a)
            {
                if (i is int)
                    Console.Write("{0,6}", i);
                else
                    Console.Write("{0,6:F3}", i);
            }
            Console.WriteLine();
        }
    }
}
