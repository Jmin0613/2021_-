using System;

namespace a007_Prim
{
    public class Graph
    {
        static int MAX = 100; //그래프의 최대 버텍스 수
        int V = 0; // 현재 그래프에서 버텍스 수
        static int INF = 999;

        string[] vertex = new string[MAX];
        int[,] adj = new int[MAX, MAX];

        internal void ReadGraph(string fileName)
        {
            string[] lines = System.IO.File.ReadAllLines("../../" + fileName);
            V = int.Parse(lines[0]); //버텍스 갯수
            for(int i = 1; i < lines.Length; i++)
            {
                //lines[1] : A	0	3	999	2	4	999
                string[] split = lines[i].Split('\t');
                vertex[i - 1] = split[0];
                for (int j = 1; j < split.Length; j++)
                    adj[i - 1, j - 1] = int.Parse(split[j]);
            }
        }

        internal void PrintGraph()
        {
            Console.WriteLine("Vertices : ", V);
            for (int i = 0; i < V; i++)
            {
                Console.Write(vertex[i] + "\t");
                for (int j = 0; j < V; j++)
                    Console.Write("{0,8 }", adj[i, j]);
                Console.WriteLine();
            }
        }

        //start 버텍스에서 시작하는 MST를 구하는 과정
        internal void Prim(int start)
        {
            bool[] selected = new bool[MAX];
            int[] dist = new int[MAX];
            int MSTWeight = 0;

            //배열 초기화
            for (int i = 0; i < V; i++)
            {
                selected[i] = false;
                dist[i] = INF;
            }

            //시작정점
            dist[start] = 0;

            for(int i = 0; i < V; i++)
            {
                int u = GetMinVertex(selected, dist);
                selected[u] = true;

                if (dist[u] == INF)
                    return;

                MSTWeight += dist[u];
                Console.WriteLine("{0} -> {1} : MST = {2} ",
                    vertex[u], dist[u], MSTWeight);

                //dist[]을 업데이트
                for (int v = 0; v < V; v++)
                    if (adj[u, v] != INF)
                        if (selected[v] && adj[u, v] < dist[v])
                            dist[v] = adj[u, v];
            }
        }

        private int GetMinVertex(bool[] selected, int[] dist)
        {
            int minV = 0; //최소정점의 인덱스
            int minDist = INF; //최소거리

            for (int i = 0; i < V; i++)  
            {
                if (!selected[i] && dist[i] < minDist) 
                {
                    minV = i;
                    minDist = dist[i];
                }
            }
            return minV;
        }
    }
}