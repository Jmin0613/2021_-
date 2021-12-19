using System.Windows;

namespace a006_closestPair
{
    internal class PointPair
    {
        public double d;
        public Point p1;
        public Point p2;

        public PointPair(double d, Point p1, PointPair p2)
        {
            this.d = d;
            this.p1 = p1;
            this.p2 = p2;
        }

        public PointPair(double min, Point point1, Point point2)
        {
        }
    }
}