package �б�3����;

import java.util.Scanner;

public class �����������Է���������ձ��ϱ� {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int count=0;
		int sum=0;
		
		System.out.println("������ �Է��ϰ� �������� -1�� �Է��ϼ���.");

		int n = scanner.nextInt();
		while(n!=-1) {
			sum+=n;
			count++;
		}
		if(count==0) System.out.println("�Էµ� ���� �����ϴ�.");
		else {
			System.out.print("������ ������ " + count+ "���̸� ");
			System.out.println("���� "+(double)sum/count+"�Դϴ�.");
		}
		scanner.close();
	}

}
