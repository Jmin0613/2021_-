package 교재7장_실습문제;

import java.util.*;

public class 실습문제1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Vector<Integer> v = new Vector<Integer>();
		
		//입력
		System.out.print("정수(-1이 입력될 때까지) >> ");
		
		while(true) {
			int num=sc.nextInt();
			if (num==-1) break;
			else v.add(num);
		}
		
		//큰 수 구하기
		int max=v.get(0); // 임시로 초기화
		for(int i=0;i<v.size();i++) {
			if(max<=v.get(i)) max=v.get(i);
		}
		System.out.println("가장 큰 수는 "+max);
		
		sc.close();
	}
}
