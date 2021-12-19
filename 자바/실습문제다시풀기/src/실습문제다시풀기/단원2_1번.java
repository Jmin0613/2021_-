package 실습문제다시풀기;

import java.util.Scanner;

public class 단원2_1번 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		final double rate = 1100.0;
		
		System.out.print("원화를 입력하세요(단위 원)>> ");
		int won=scanner.nextInt();
		double dollar=won/rate;
		System.out.print(won+"원은 $"+ dollar+"입니다.");
		
		scanner.close();
	}

}
