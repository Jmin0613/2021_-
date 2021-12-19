using System;
using System.Collections.Generic;
using System.Text;

namespace _6주차_만들어보기
{
    class Subject
    {
        public string Title { get; set; } // 속성 하나 만듦
        public int Credit { get; set; } // 속성 하나 만듦
        public string Grade { get; set; } //속성 하나 만듦
        
        public Subject() { } //생성자
        public Subject(string title, int credit)
        {
            this.Title = title; // 9줄의 Title
            this.Credit = credit; // 10줄의 Credit
        }
    }
}
