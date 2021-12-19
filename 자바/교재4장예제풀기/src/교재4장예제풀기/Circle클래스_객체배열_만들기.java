package 교재4장예제풀기;

class Circle_a {
	int radius;
	public Circle_a(int radius) {
		this.radius=radius;
	}
	public double getArea() {
		return 3.14*radius*radius;
	}
}

public class Circle클래스_객체배열_만들기 {

	public static void main(String[] args) {
		Circle_a[] c= new Circle_a[5];
		
		for(int i=0;i<c.length;i++)
			c[i]=new Circle_a (i);
		
		for(int i=0;i<c.length;i++)
			System.out.print((int)(c[i].getArea())+" ");

	}

}
