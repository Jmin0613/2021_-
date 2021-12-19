package 교재7장_실습문제;

import java.util.*;

public class 실습문제2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Character> a =new ArrayList<Character>(6);
		
		//입력
		System.out.print("6개의 학점을 빈 칸으로 분리 입력(A/B/C/D/F) >> ");
		for(int i=0;i<6;i++) {
			char c=sc.next().charAt(0);
			a.add(c);
		}
		
		//평균
		double sum=0;
		double num;
		for(int i=0;i<6;i++) {
			if(a.get(i)=='A') num=4.0;
			else if(a.get(i)=='B') num=3.0;
			else if(a.get(i)=='C') num=2.0;
			else if(a.get(i)=='D') num=1.0;
			else num=0;
			
			sum+=num;
		}
		double ave=sum/6;
		
		System.out.println(ave);
		
		sc.close();

	}

}
