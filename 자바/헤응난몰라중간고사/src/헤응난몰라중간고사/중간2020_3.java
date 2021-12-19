package 헤응난몰라중간고사;

import java.util.*;

public class 중간2020_3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("정수를 입력하시오 >> ");
		int num=scanner.nextInt();
		
		for(int i=0;i<num;i++) {
			for(int j=0;j<num-i;j++)
				System.out.print(" ");
			for(int j=0;j<=i;j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		scanner.close();

	}

}
