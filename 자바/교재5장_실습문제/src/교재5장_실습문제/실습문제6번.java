//package ����5��_�ǽ�����;
//
//class Point{
//	private int x, y;
//	public Point(int x, int y){this.x=x; this.y=y;}
//	public int getX() {return x;}
//	public int getY() {return y;}
//	protected void move(int x, int y) { this.x=x; this.y=y;}
//}
//
//class ColorPoint extends Point{
//	String color;
//	
//	ColorPoint(){ //������ ������
//		super(0,0);
//		this.color="BLACK";
//	}
//	
//	ColorPoint(int x, int y){ //color���� ���
//		super(x,y);
//		this.color="BLACK";
//	}
//		
//	ColorPoint(int x, int y, String color){
//		super(x,y); //������ ����Ŭ������ �����ڷ� �̵�
//		this.color=color;
//	}
//	
//	public void setXY(int x,int y) {
//		move(x,y); //��ǥ ����
//	}
//	
//	public void setColor(String color) {
//		this.color=color; //�� ����
//	}
//	
//	public String toString() {
//		return color+"���� ("+getX()+", "+getY()+") �� ��";
//	}
//}
//
//public class �ǽ�����6�� {
//
//	public static void main(String[] args) {
//		ColorPoint zeroPoint = new ColorPoint();
//		System.out.println(zeroPoint.toString()+"�Դϴ�.");
//		
//		ColorPoint cp = new ColorPoint(10,10);
//		cp.setXY(5,5);
//		cp.setColor("RED");
//		System.out.println(cp.toString()+"�Դϴ�.");
//
//	}
//
//}
