package �����������߰����;

import java.util.*;


public class �߰�2018_5�� {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("���ڿ� �Է� :");
		String str=scanner.nextLine();
		
		for(int i=1;i<=str.length();i++) {
			System.out.print(str.substring(i));
			System.out.println(str.substring(0,i));
		}
		
		scanner.close();
	}
}
