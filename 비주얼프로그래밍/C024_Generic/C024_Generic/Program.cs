using System;

namespace C024_Generic
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 1, 2, 3, 4 };
            double[] d = { 0.1, 0.2, 0.3 };
            string[] s = { "tiger", "lion", "zebra" };

            //for(int i = 0; i < 3; i++)
            //    console.writeline(a[i])
            PrintArray<int>(a);
            PrintArray<double>(d);
            PrintArray<string>(s);
        }

        private static void PrintArray<T>(T[] a)
        {
            foreach(var item in a)
            {
                Console.Write("{0,8}", item);
            }
            Console.WriteLine();
        }
    }
}
