using System;
using System.Collections.Generic;
using System.Text;

namespace F005_ScoreCalc
{
    class Subject
    {
        public string Title { get; set; } //속성 하나 만들어짐
        public int Credit { get; set; }
        public string Grade { get; set; }

        public Subject() { } //생성장

        public Subject(string title, int credit) {
            this.Title = title;
            this.Credit = credit;
        }
    }
}
