package ����4�忬��;

class Calc{
	public static int abs(int a) {return a>0?a:-1;}
	public static int max(int a, int b) {return (a>b)?a:b;}
	public static int min(int a, int b) {return (a>b)?b:a;}
	
	private Calc(){;}
}

public class CalcEX {

	public static void main(String[] args) {
		Calc m = new Calc();
		int a=m.abs(-5);
		int b=m.max(10,8);
		int c=m.min(-3,-8);
		
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
		// ������ ���� -> �����ڰ� private�� �ƴ϶�.
		
		System.out.println(Calc.abs(-5));
		System.out.println(Calc.max(10,8));
		System.out.println(Calc.min(-3,-8));

	}

}
