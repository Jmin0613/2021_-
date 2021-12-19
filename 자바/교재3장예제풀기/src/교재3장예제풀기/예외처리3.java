package 교재3장예제풀기;

import java.util.Scanner;
import java.util.InputMismatchException;

public class 예외처리3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("정수 3개를 입력하시오 : ");
		int sum=0, n=0;
		
		for(int i=0;i<3;i++) {
			System.out.print(i+">>");
			
			try{
				n=scanner.nextInt();
			}
			catch(InputMismatchException e) {
				System.out.println("정수가 아닙니다. 다시 입력하세요.");
				scanner.nextLine(); //현재 스트림에 남아있는 토큰 지운다
				i--;
				continue;
			}
			sum+=n;
		}
		System.out.println("합은"+sum);
		scanner.close();
	}

}
