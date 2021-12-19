﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace F015_ArduinoSensorMonitoringInCS
{
    class SensorData
    {
        public string Date { get; set; }
        public string Time { get; set; }
        public int Value { get; set; }

        public SensorData(string date, string time, int value)
        {
            this.Date = date;
            this.Time = time;
            this.Value = value;
        }
    }
}
