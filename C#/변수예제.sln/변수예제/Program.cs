using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 변수예제
{
    class CSVar
    {
        //필드 (클래스 내에서 공통적으로 사용되는 전역 변수)
        int globalVar;  // 값 명시x -> 기본값 0이 할당됨
        const int Max = 1024;
        
        public void Method1()
        {
            //로컬변수
            int localVar;

            //아래 할당이 없으면 에러 발생
            localVar = 100; // 지역변수 localVar는 값 할당안하고 사용 -> 컴파일러 에러

            Console.WriteLine(globalVar);
            Console.WriteLine(localVar);
        }
    }

    class Program
    {
        // 모든 프로그램에는 Main()이 있어야 함
        static void Main(string[] args)
        {
            // 테스트
            CSVar obj = new CSVar();
            obj.Method1();
        }
    }
}
