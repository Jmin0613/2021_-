//package 교재5장_실습문제;
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
//	ColorPoint(){ //디폴드 생성자
//		super(0,0);
//		this.color="BLACK";
//	}
//	
//	ColorPoint(int x, int y){ //color없는 경우
//		super(x,y);
//		this.color="BLACK";
//	}
//		
//	ColorPoint(int x, int y, String color){
//		super(x,y); //지정된 슈퍼클래스의 생성자로 이동
//		this.color=color;
//	}
//	
//	public void setXY(int x,int y) {
//		move(x,y); //좌표 설정
//	}
//	
//	public void setColor(String color) {
//		this.color=color; //색 설정
//	}
//	
//	public String toString() {
//		return color+"색의 ("+getX()+", "+getY()+") 의 점";
//	}
//}
//
//public class 실습문제6번 {
//
//	public static void main(String[] args) {
//		ColorPoint zeroPoint = new ColorPoint();
//		System.out.println(zeroPoint.toString()+"입니다.");
//		
//		ColorPoint cp = new ColorPoint(10,10);
//		cp.setXY(5,5);
//		cp.setColor("RED");
//		System.out.println(cp.toString()+"입니다.");
//
//	}
//
//}
