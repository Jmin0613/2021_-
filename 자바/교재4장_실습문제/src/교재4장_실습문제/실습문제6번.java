package 교재4장_실습문제;

import java.util.Scanner;

class Circle{
	private double x,y;
	private int radius;
	public Circle(double x, double y, int radius) {
		this.x=x;
		this.y=y;
		this.radius=radius;
	}
	public void Show() {
		System.out.println("("+x+", "+y+")"+radius);
	}
	public static void LargeCircle(Circle c[]) {
		double max = Math.pow(c[0].radius, 2);
		int maxi=0;
		for(int i=1;i<c.length;i++) {
			if(max<Math.pow(c[i].radius, 2)) {
				max=Math.pow(c[i].radius, 2);
				maxi=i;
			}
		}
		System.out.print("가장 면적이 큰 원은 ");
		c[maxi].Show();
	}
}

public class 실습문제6번 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Circle c []= new Circle[3]; //객체 배열 선언 
		for(int i=0;i<c.length;i++) {
			System.out.print("x, y, radius >>");
			double x=scanner.nextDouble();
			double y=scanner.nextDouble();
			int radius=scanner.nextInt();
			c[i]=new Circle(x,y,radius); //Circle 객체 생성
		}
		Circle.LargeCircle(c);
		scanner.close();

	}

}

