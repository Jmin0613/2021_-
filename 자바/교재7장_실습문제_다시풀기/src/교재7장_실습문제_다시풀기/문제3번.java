package 교재7장_실습문제_다시풀기;

import java.util.*;

public class 문제3번 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		//입력
		System.out.println("나라 이름과 인구를 입력하세요.(예 : korea 5000)");
		while(true) {
			System.out.print("나라 이름, 인구 >> ");
			String nation=sc.next();
			
			if(nation.equals("그만")) break;
			
			int population=sc.nextInt();
			nations.put(nation, population);
		}
		
		//검색
		while(true) {
			System.out.print("인구 검색 >> ");
			String nation =sc.next();
			if(nation.equals("그만")) break;
				
			Integer n = nations.get(nation);
			if(n==null)
				System.out.println(nation+" 나라는 없습니다.");
			else
				System.out.println(nation+"의 인구는 "+n);
		}
		
		sc.close();

	}

}
