using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BMI_다시해보기
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("키(cm)를 입력 : ");
            double height = double.Parse(Console.ReadLine());
            //입력받은 값을 string에서 double로 변환

            Console.Write("체중(kg)를 입력 : ");
            double weight = double.Parse(Console.ReadLine());
            //입력받은 값을 string에서 double로 변환

            double bmi = weight / (height / 100 * height / 100);
            Console.WriteLine("bmi = " + bmi);
            //문자열+숫자 ==> 문자열
        }
    } // C#은 모든 입력값을 string으로 받는다
} // 숫자로 변환시키기 위해서는 int.Parse(), double.Parse() 사용
