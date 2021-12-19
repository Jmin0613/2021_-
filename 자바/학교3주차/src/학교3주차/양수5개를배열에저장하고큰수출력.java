package 학교3주차;

import java.util.Scanner;

public class 양수5개를배열에저장하고큰수출력 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int intArray[] = new int[5];
		
		int max=0;
		System.out.println("양수 5개를 입력");
		for(int i=0;i<5;i++) {
			intArray[i]=scanner.nextInt();
			if(intArray[i]>max)
				max=intArray[i];
		}
		System.out.print("가장 큰 수는 "+max+"입니다.");

		scanner.close();
	}

}
