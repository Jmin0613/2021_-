package ����4�忬��;

public class StaticCheck {
	int s;
	static int t;
	
	public static void main(String[] args) {
		StaticCheck.t = 10;
		StaticCheck.s=20;
		//static�޼ҵ忡�� non-static����� �����ϰ� ����
		
		StaticCheck obj= new StaticCheck();
		obj.s=30;
		obj.t=40;
		System.out.println(obj.s);
		//�Ұ���
		
		System.out.println(obj.t);

	}

}
