package 교재4장연습;

public class StaticCheck {
	int s;
	static int t;
	
	public static void main(String[] args) {
		StaticCheck.t = 10;
		StaticCheck.s=20;
		//static메소드에서 non-static멤버를 쓰려하고 있음
		
		StaticCheck obj= new StaticCheck();
		obj.s=30;
		obj.t=40;
		System.out.println(obj.s);
		//불가능
		
		System.out.println(obj.t);

	}

}
