package �б�5����1��;

public class Circle {
	int radius; //���� ������ �ʵ�
	String name; //���� �̸� �ʵ�
	
	/* �ΰ��� �����ڸ� ������! */
	public Circle() { //�Ű����� ���� ������
		radius=1;name=""; //radius�� �ʱⰪ�� 1
	} 
	public Circle(int r, String n) { //�Ű����� ���� ������
		radius=r;name=n;
	}
	
	public double getArea() { //���� ���� ��� �޼ҵ� 
		return 3.14*radius*radius;
	}

	public static void main(String[] args) {
		Circle pizza;
		pizza=new Circle(); // Circle��ü ����
		pizza.radius=10;
		pizza.name="�ڹ�����";
		double area=pizza.getArea();
		System.out.println(pizza.name+"�� ������ "+area);
		
		Circle donut = new Circle(); //Circle��ü ����
		donut.radius=2;
		donut.name="�ڹٵ���";
		area=donut.getArea();
		System.out.println(donut.name+"�� ������ "+area);
		
		Circle pizza2 = new Circle(10,"�ڹ�����2");
		
		area=pizza2.getArea();
		System.out.println(pizza2.name+"�� ������ "+area);
		
		Circle donut2 = new Circle();
		donut2.name="��������2";
		area=donut2.getArea();
		System.out.println(donut2.name+"�� ������ "+area);

	}

}
/* ������ -> �ʱ�ȭ ���ٶ� �ʿ���!, ���࿡ ������? �����Ϸ��� ����Ʈ�� �����. */
