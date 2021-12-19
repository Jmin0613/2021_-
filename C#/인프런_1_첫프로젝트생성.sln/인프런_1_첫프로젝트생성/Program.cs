// using System -> '사용하다'
using System; // System을 사용하다
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// namespace -> 관련된 구조체, 클래스, 델리게이트, 인터페이스 등을 그룹화 한 것
// 사용하기 편하게 성격이 비슷한 것들을 묶어놓는 것
namespace 인프런_1_첫프로젝트생성
{
    class Program // class 크게 두가지로 나뉨. (1)필드->적정인 상태 표현 (2)메소드->동적인 상태 표현
    // class -> 독립적 존재 가능한 최소 단위, C#프로그램 구성하는 기본 단위
    // 하나의 class로 여러 개의 객체 만들 수 있음
    {
        static void Main(string[] args)
        // static void Main -> 메소드
        // main메소드는 그중 가장 중요한 메소드로 프로그램 최초 진입점을 나타냄
        // 모든 프로그램에는 메인 메소드가 반드시 존재, 메인메소드시작->프로그램시작/메인메소드종료->프로그램종료
        // void는 반환 형식으로 반환값 없음을 의미
        {
            Console.WriteLine("Hello world!");
            // Console.WriteLine() -> 괄호 안 문자열을 콘솔 창에 출력
            Console.Write("Hello world!");
            // Console.Write() -> 괄호 안 문자열을 콘솔 창에 출력

            //그렇다면 두가지는 무슨 차이?
            // 개형의 차이. Console.Write 하면 다음 줄로 넘어감
        }
    }
}