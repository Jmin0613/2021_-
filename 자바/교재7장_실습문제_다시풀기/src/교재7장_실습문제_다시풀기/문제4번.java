package 교재7장_실습문제_다시풀기;

import java.util.*;

public class 문제4번 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Vector<Integer> v = new Vector<Integer>();
		
		int sum=0;
		int ave=0;
		int cnt=0;
		
		while(true) {
			System.out.print("강수량 입력 (0 입력시 종료) >> ");
			int num=sc.nextInt();
			if(num==0) break;
			
			v.add(num);
			
			sum+=num;
			cnt++;
			ave=sum/cnt;
			
			for(int i=0;i<v.size();i++)
				System.out.print(v.get(i)+" ");
			System.out.println();
			
			System.out.println("현재 평균 "+ave);
		}
		
		sc.close();

	}

}
