package �б�2��1ȸ��;

import java.util.Scanner;

public class ScannerŰ�Է� {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		System.out.println("�̸� �Է� : ");
		String name=scanner.next();
		
		System.out.println("���� �Է� : ");
		int age=scanner.nextInt();
		
		System.out.println("�̸� : "+name);
		System.out.println("���� : "+age);
		
		scanner.close();

	}

}
