using System;

namespace b008
{
    class Program
    {
        static void Main(string[] args)
        {
           int nPrime = 0;
           for (int x = 2; x <= 1000; x++)
            {
                int i;
                for (i = 2; i < x; i++)
                {
                    if (x % i == 0)
                        break;
                }
                if (i == x)
                {
                    Console.Write("{0}\t", x);
                    nPrime++;
                }
            }
            Console.WriteLine();
            Console.WriteLine("소수의 갯수 = {0}", nPrime);
        }
    }
}
