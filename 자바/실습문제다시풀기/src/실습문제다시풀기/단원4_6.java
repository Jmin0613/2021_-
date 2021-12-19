package 실습문제다시풀기;

import java.util.Scanner;

class Circle2{
	private double x,y;
	private int radius;
	
	public Circle2(double x, double y, int radius) {
		this.x=x;
		this.y=y;
		this.radius=radius;
	}
	
	public void Show() {
		System.out.println("("+x+", "+y+")"+radius);
	}
	
	public static void LargeCircle(Circle2 c[]) {
		double max=Math.pow(c[0].radius, 2);
		
		int max_i=0;
		for(int i=1;i<c.length;i++) {
			if(max<Math.pow(c[i].radius, 2)) {
				max=Math.pow(c[i].radius, 2);
				max_i=i;
			}
		}
		System.out.print("가장 면적이 큰 원은 ");
		c[max_i].Show();
	}
}



public class 단원4_6 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Circle2 c []= new Circle2[3]; //객체 배열 선언 
		for(int i=0;i<c.length;i++) {
			System.out.print("x, y, radius >>");
			double x=scanner.nextDouble();
			double y=scanner.nextDouble();
			int radius=scanner.nextInt();
			c[i]=new Circle2(x,y,radius); //Circle 객체 생성
		}
		Circle2.LargeCircle(c);
		scanner.close();


	}

}
