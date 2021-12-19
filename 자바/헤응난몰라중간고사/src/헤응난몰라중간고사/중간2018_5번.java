package 헤응난몰라중간고사;

import java.util.*;


public class 중간2018_5번 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("문자열 입력 :");
		String str=scanner.nextLine();
		
		for(int i=1;i<=str.length();i++) {
			System.out.print(str.substring(i));
			System.out.println(str.substring(0,i));
		}
		
		scanner.close();
	}
}
