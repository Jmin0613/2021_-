using System;

namespace b003
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y;

            Console.WriteLine("x를 입력하시오 : ");
            x = int.Parse(Console.ReadLine());

            Console.WriteLine("y를 입력하시오 : ");
            y = int.Parse(Console.ReadLine());

            Console.WriteLine("{0} > {1} = {2}", x, y, x > y);
            Console.WriteLine("{0} >= {1} = {2}", x, y, x >= y);
            Console.WriteLine("{0} < {1} = {2}", x, y, x < y);
            Console.WriteLine("{0} <= {1} = {2}", x, y, x <= y);
            Console.WriteLine("{0} == {1} = {2}", x, y, x == y);
            Console.WriteLine("{0} != {1} = {2}", x, y, x != y);
        }
    }
}
