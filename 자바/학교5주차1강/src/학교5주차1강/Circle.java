package 학교5주차1강;

public class Circle {
	int radius; //원의 반지름 필드
	String name; //원의 이름 필드
	
	/* 두개의 생성자를 가진다! */
	public Circle() { //매개변수 없는 생성자
		radius=1;name=""; //radius의 초기값은 1
	} 
	public Circle(int r, String n) { //매개변수 가진 생성자
		radius=r;name=n;
	}
	
	public double getArea() { //원의 면적 계산 메소드 
		return 3.14*radius*radius;
	}

	public static void main(String[] args) {
		Circle pizza;
		pizza=new Circle(); // Circle객체 생성
		pizza.radius=10;
		pizza.name="자바피자";
		double area=pizza.getArea();
		System.out.println(pizza.name+"의 면적은 "+area);
		
		Circle donut = new Circle(); //Circle객체 생성
		donut.radius=2;
		donut.name="자바도넛";
		area=donut.getArea();
		System.out.println(donut.name+"의 면적은 "+area);
		
		Circle pizza2 = new Circle(10,"자바피자2");
		
		area=pizza2.getArea();
		System.out.println(pizza2.name+"의 면적은 "+area);
		
		Circle donut2 = new Circle();
		donut2.name="도넛피자2";
		area=donut2.getArea();
		System.out.println(donut2.name+"의 면적은 "+area);

	}

}
/* 생성자 -> 초기화 해줄때 필요함!, 만약에 없으면? 컴파일러가 디폴트로 만든다. */
