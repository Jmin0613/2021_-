package ����4�忹��Ǯ��;

class Circle{
	int radius;
	String name;
	
	public Circle(){};
	
	public double getArea() {
		return 3.14*radius*radius;
	}
}

public class CircleŬ������_��ü���� {

	public static void main(String[] args) {
		Circle pizza;
		pizza = new Circle();
		pizza.radius=10;
		pizza.name="�ڹٶ� �ٶ�����";
		double area = pizza.getArea();
		System.out.println(pizza.name+"�� ������ "+area);
		
		Circle donut = new Circle();
		donut.radius=2;
		donut.name="�ڹٸ� ��Ƶ���";
		area=donut.getArea();
		System.out.println(donut.name+"�� ������ "+area);

	}

}
