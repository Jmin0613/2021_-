package �ǽ������ٽ�Ǯ��;

import java.util.Scanner;

public class �ܿ�2_6 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("1~99 ������ ������ �Է��Ͻÿ� >> ");
		int num=scanner.nextInt();
		
		int cnt=0;
		if(num/10 == 3 || num/10 == 6 || num/10 == 9) {
			cnt++;
		}
		if(num%10 == 3 || num%10 == 6 || num%10 == 9) {
			cnt++;
		}
		
		if(cnt==1) {
			System.out.println("�ڼ�¦");
		}
		if(cnt==2) {
			System.out.println("�ڼ�¦¦");
		}
		scanner.close();


	}

}
