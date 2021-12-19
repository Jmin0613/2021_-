using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace class_car
{
    class Car
    {
        private string handle = "AMODEL";

        public void carRun()
        {
            Console.WriteLine("자동차를 움직인다.");
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("System을 이용한 호출");
            Console.WriteLine("Hello World!");
        }
    }
}
