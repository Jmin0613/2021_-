package ����3�忹��Ǯ��;

import java.util.Scanner;

public class ����ó��1 {

	public static void main(String[] args) {
		// 0���� ������ �߻��ϴ�, ArithmeticException ����ó��
		Scanner scanner = new Scanner(System.in);
		
		while(true) {
			System.out.print("�������� �Է��Ͻÿ� : ");
			int dividend=scanner.nextInt();
			System.out.print("�������� �Է��Ͻÿ� : ");
			int divisor=scanner.nextInt();
			
			try {
				System.out.print(dividend+"�� "+divisor+"�� ������ ���� "
						+dividend/divisor+"�Դϴ�.");
				break;
			}
			catch(ArithmeticException e){
				System.out.println("0���� ���� �� �����ϴ�! �ٽ� �Է��ϼ���");
			}
		}
		scanner.close();

	}

}
