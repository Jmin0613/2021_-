package 교재4장예제풀기;

class Circle{
	int radius;
	String name;
	
	public Circle(){};
	
	public double getArea() {
		return 3.14*radius*radius;
	}
}

public class Circle클래스의_객체생성 {

	public static void main(String[] args) {
		Circle pizza;
		pizza = new Circle();
		pizza.radius=10;
		pizza.name="자바랑 바람피자";
		double area = pizza.getArea();
		System.out.println(pizza.name+"의 면적은 "+area);
		
		Circle donut = new Circle();
		donut.radius=2;
		donut.name="자바를 잡아도넛";
		area=donut.getArea();
		System.out.println(donut.name+"의 면적은 "+area);

	}

}
