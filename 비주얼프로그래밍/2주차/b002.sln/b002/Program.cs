using System;

namespace b002
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("첫번째 숫자를 입력하세요 : ");
            int x = int.Parse(Console.ReadLine());
            Console.Write("두번째 숫자를 입력하세요 : ");
            int y = int.Parse(Console.ReadLine());

            //출력방법 2가지
            Console.WriteLine(x + " + " + y + " = " + (x + y));
            Console.WriteLine(x + " - " + y + " = " + (x - y));
            Console.WriteLine(x + " * " + y + " = " + (x * y));
            Console.WriteLine(x + " / " + y + " = " + (x / y));
            Console.WriteLine(x + " % " + y + " = " + (x % y));
            Console.WriteLine();
            Console.WriteLine("{0} + {1} = {2}", x, y, x + y);
            Console.WriteLine("{0} - {1} = {2}", x, y, x - y);
            Console.WriteLine("{0} * {1} = {2}", x, y, x * y);
            Console.WriteLine("{0} / {1} = {2}", x, y, x / y);
            Console.WriteLine("{0} % {1} = {2}", x, y, x % y);
        }
    }
}
