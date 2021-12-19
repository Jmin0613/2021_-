package 교재5장_실습문제;

class Point{
	private int x, y;
	public Point(int x, int y){this.x=x; this.y=y;} //p
	public int getX() {return x;}
	public int getY() {return y;}
	protected void move(int x, int y) { this.x=x; this.y=y;} //p2
}

class PositivePoint extends Point{
	PositivePoint(){ //p1 생성자
		super(0,0);
	}
	
	PositivePoint(int x, int y){ //p2 생성자
		super(x,y);
		if(x<0 || y<0) {
			super.move(0,0);
		}
	}
	
	public void move(int x, int y) { //p
		if(x>0 && y>0) {
			super.move(x,y);
		}
	}
	
	public String toString() {
		return "("+getX()+", "+getY()+")의 점입니다.";
	}
}

public class 실습문제8번 {

	public static void main(String[] args) {
		PositivePoint p = new PositivePoint();
		p.move(10,10);
		System.out.println(p.toString()+"입니다.");
		
		p.move(-5,5);
		System.out.println(p.toString()+"입니다.");
		
		PositivePoint p2 = new PositivePoint(-10,-10);
		System.out.println(p2.toString()+"입니다.");	
		
	}

}
