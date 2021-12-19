package 학교4주차3과제;

import java.util.Scanner;

public class 실습문제8번 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int num;
		int arr[]=new int[100];
		
		System.out.print("정수 몇개?");
		num=scanner.nextInt();
		
		for(int i=0;i<num;i++) {
			int j=(int)(Math.random()*100+1);
			arr[i]=j;
		}
		
		for(int i=0;i<num;i++) {
			if(i%10==0)
				System.out.println();
			System.out.print(arr[i]+" ");
		}
		
		scanner.close();
	}

}
