package 교재7장_실습문제_다시풀기;

import java.util.*;

public class 문제7번 {

	public static void main(String[] args) {
		HashMap<String, Double> s = new HashMap<String, Double>(5);
		Scanner sc = new Scanner(System.in);
		
		//학생 정보 입력
		System.out.println("미래장학금관리시스템입니다.");
		for(int i=0;i<5;i++) {
			System.out.print("이름과 학점 >");
			String name=sc.next();
			double score=sc.nextDouble();
			
			s.put(name, score);
		}
		
		//학점 기준 입력
		System.out.print("장학생 선발 학점 기준 입력 >> ");
		double standard=sc.nextDouble();
		
		//장학생 명단 출력
		Set<String> keys = s.keySet();
		Iterator<String> it=keys.iterator();
		
		while(it.hasNext()) {
			String name = it.next();
			double score=s.get(name);
			if (score>=standard)
				System.out.print(name + " ");
		}
		
		sc.close();

	}

}
