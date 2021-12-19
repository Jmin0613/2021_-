using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 최댓값_최솟값_null_ext
{
    class Program
    {
        static void Main(string[] args)
        {
            // MaxValuse 최댓값 / MinValue 최솟값
            int i = int.MaxValue;
            float f = float.MinValue;

            //어떤 변수가 메모리 상에 어떤 데이터도 가지고 있지 않음을 의미
            //Null 가질 수 있는 타입과 가지지 못하는 타입으로 나뉨
            string s;
            s = null;
            // 문자열(string)타입은 Null 가질 수 있음

            //Nullable Type
            // 정수나 날짜는 일반적으로 Null 가질 수 없음
            // 이런 타입들이 Null가질 수 있게 -> Nullable Type이라 함
            int? i = null;
            i = 101;

            bool? b = null;

            //int? 를 inㅅ로 할당
            Nullable<int> j = null;
            j = 10;
            int k = j.Value;
            //Nullavle Type(int?)을 일반 Value Type으로 변경하기 위해서는
            //Nullable의 .Value속성 사용됨
        }
    }
}
