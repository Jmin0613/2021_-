package 교재7장_연습;

import java.util.*;

class Point{
	private int x,y;
	
	public Point(int x, int y) {
		this.x=x;this.y=y;
	}
	public String toString() {
		return "("+x+", "+y+")";
	}
}

public class PointVectorEx {

	public static void main(String[] args) {
		Vector<Point> v = new Vector<Point>();
		
		v.add(new Point(2,3));
		v.add(new Point(-5,20));
		v.add(new Point(30,-8));
		
		v.remove(1); //인덱스 1의 Point(-5,20) 객체 삭제
		
		for(int i=0;i<v.size();i++) {
			Point p=v.get(i);
			System.out.println(p);
		}
	}

}
