package �б�4����3����;

import java.util.Scanner;


public class ����4������ {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		System.out.print("�ҹ��� ���ĺ� �ϳ��� �Է��Ͻÿ� >> ");
		String s = scanner.next();
		char c = s.charAt(0);
		
		char a='a';
	
		while(c>='a') {
			a='a';
			while(a<=c){
				System.out.print(a);
				a=(char)(a+1);
			}System.out.println();
			
			c=(char)(c-1);
		}
		scanner.close();
	}

}
