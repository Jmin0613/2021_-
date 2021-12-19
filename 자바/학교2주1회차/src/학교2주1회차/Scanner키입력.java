package 학교2주1회차;

import java.util.Scanner;

public class Scanner키입력 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		System.out.println("이름 입력 : ");
		String name=scanner.next();
		
		System.out.println("나이 입력 : ");
		int age=scanner.nextInt();
		
		System.out.println("이름 : "+name);
		System.out.println("나이 : "+age);
		
		scanner.close();

	}

}
