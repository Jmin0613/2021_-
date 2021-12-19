package 실습문제다시풀기;

import java.util.Scanner;

public class 단원2_6 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("1~99 사이의 정수를 입력하시오 >> ");
		int num=scanner.nextInt();
		
		int cnt=0;
		if(num/10 == 3 || num/10 == 6 || num/10 == 9) {
			cnt++;
		}
		if(num%10 == 3 || num%10 == 6 || num%10 == 9) {
			cnt++;
		}
		
		if(cnt==1) {
			System.out.println("박수짝");
		}
		if(cnt==2) {
			System.out.println("박수짝짝");
		}
		scanner.close();


	}

}
