using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace a007_Prim
{
    class Program
    {
        static void Main(string[] args)
        {
            Graph g = new Graph();
            g.ReadGraph("graph.txt");
            g.PrintGraph();
            g.Prim(0);
        }
    }
}
