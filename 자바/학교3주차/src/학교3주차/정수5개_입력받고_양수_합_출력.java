package 학교3주차;

import java.util.Scanner;

public class 정수5개_입력받고_양수_합_출력 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		System.out.println("정수 5개 입력 : ");
		int sum=0;
		for(int i=0;i<5;i++) {
			int n = scanner.nextInt();
			if(n<=0)
				continue;
			else
				sum+=n;
		}
		System.out.println("양수 합 : "+sum);
		
		scanner.close();
	}

}
