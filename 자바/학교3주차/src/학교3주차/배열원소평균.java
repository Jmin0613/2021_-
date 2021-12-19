package 학교3주차;

import java.util.Scanner;

public class 배열원소평균 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner (System.in);
		
		int intArray[]= new int[5];
		int sum=0;
		
		System.out.print(intArray.length+"개의 정수를 입력하시오 >> ");
		for(int i=0;i<intArray.length;i++)
			intArray[i]=scanner.nextInt();
		
		for(int i=0;i<intArray.length;i++)
			sum+=intArray[i];
		
		System.out.print("평균은 "+(double)sum/intArray.length);
		scanner.close();

	}

}
