package �б�4����3����;

import java.util.Scanner;

public class �ǽ�����5�� {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		System.out.print("���� ���� 10���� �Է��Ͻÿ� >> ");
		int num[] = new int[10];
		
		for(int i=0;i<10;i++) {
			num[i]=scanner.nextInt();
		}
		
		
		System.out.print("3�� ����� ");
		for(int i=0;i<10;i++) {
			if(num[i]%3==0)
				System.out.print(num[i]+" ");
		}
		scanner.close();

	}

}
