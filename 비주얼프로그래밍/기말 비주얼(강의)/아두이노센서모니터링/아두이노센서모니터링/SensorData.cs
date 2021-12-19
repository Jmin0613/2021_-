using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 아두이노센서모니터링
{
    class SensorData // 신호 받을 클래스 만들음
    {
        public string Data { get; set; } // Data 속성
        public string Time { get; set; } // Time 속성
        public int Value { get; set; } // Value 속성

        public SensorData(string date, string time, int value) //생성자 메소드
        {
            this.Data = date;
            this.Time = time;
            this.Value = value;
        }
    }
}
