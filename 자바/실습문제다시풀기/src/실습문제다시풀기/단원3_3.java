package �ǽ������ٽ�Ǯ��;

import java.util.Scanner;

public class �ܿ�3_3 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int num;
		
		System.out.print("������ �Է��Ͻÿ� >> ");
		num=scanner.nextInt();
		
		for(int i=0;i<num;i++) {
			for(int j=0;j<num-i;j++)
				System.out.print("*");
			System.out.println();
		}
		
		scanner.close();

	}

}
