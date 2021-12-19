using System;

namespace b001
{
    class Program
    {
        static void Main(string[] args)
        {
            int id;
            string name;

            Console.Write("학번을 입력하세요 : ");
            id = int.Parse(Console.ReadLine());

            Console.Write("이름을 입력하세요 : ");
            name = Console.ReadLine();

            Console.WriteLine(" [학번] : " + id);
            Console.WriteLine(" [이름] : " + name);

            Console.ReadLine();
        }
    }
}
