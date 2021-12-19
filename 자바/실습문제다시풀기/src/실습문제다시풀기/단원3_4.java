package 실습문제다시풀기;

import java.util.Scanner;

public class 단원3_4 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		System.out.print("소문자 알파벳 하나를 입력하시오 >> ");
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
