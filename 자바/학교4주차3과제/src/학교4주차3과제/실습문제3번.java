package 학교4주차3과제;

import java.util.Scanner;

public class 실습문제3번 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int num;
		
		System.out.print("정수를 입력하시오 >> ");
		num = scanner.nextInt();
		
		for(int i=0;i<num;i++) {
			for(int j=0;j<num-i;j++)
				System.out.print("*");
			System.out.println();
		}
		
		scanner.close();
	}
}