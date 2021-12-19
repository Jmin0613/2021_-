using System;
using System.Collections.Generic;

namespace C026_ArrayNList
{
    class Program
    {
        static void Main(string[] args)
        {
            // string 배열
            string[] arrS = new string[10];
            //string 리스트
            List<string> lstS = new List<string>();

            arrS[0] = "tiger";
            arrS[1] = "lion";
            arrS[2] = "zebra";

            lstS.Add("tiger");
            lstS.Add("lion");
            lstS.Add("zebra");

            Print(arrS);
            Print(lstS);

            Array.Sort(arrS);
            lstS.Sort();

            Console.WriteLine("After Sorting : ");
            Print(arrS);
            Print(lstS);

        }

        private static void Print(List<string> lstS)
        {
            foreach (var i in lstS)
                Console.Write("{0,10}", i);
            Console.WriteLine();
        }

        private static void Print(string[] arrS)
        {
            foreach (var i in arrS)
                Console.Write("{0,10}", i);
            Console.WriteLine();
        }
    }
}
