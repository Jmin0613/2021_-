package ����3�忹��Ǯ��;

import java.util.Scanner;
import java.util.InputMismatchException;

public class ����ó��3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("���� 3���� �Է��Ͻÿ� : ");
		int sum=0, n=0;
		
		for(int i=0;i<3;i++) {
			System.out.print(i+">>");
			
			try{
				n=scanner.nextInt();
			}
			catch(InputMismatchException e) {
				System.out.println("������ �ƴմϴ�. �ٽ� �Է��ϼ���.");
				scanner.nextLine(); //���� ��Ʈ���� �����ִ� ��ū �����
				i--;
				continue;
			}
			sum+=n;
		}
		System.out.println("����"+sum);
		scanner.close();
	}

}
