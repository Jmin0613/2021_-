package 교재7장_실습문제_다시풀기;

import java.util.*;

public class 문제8번 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashMap<String, Integer> customer = new HashMap<String, Integer>();
		
		System.out.println("** 포인트 관리 프로그램입니다 **");
		while(true) {
			System.out.print("이름과 포인트 입력 >");
			String name = sc.next();
			int point =sc.nextInt();
			
			if(name.equals("그만"))
				break;
			
			//신규
			if(customer.get(name)==null)
				customer.put(name,point);
			//기존
			else {
				int acc=customer.get(name);
				customer.put(name, acc+point);
			}
			
			//출력
			Set<String> keys = customer.keySet();
			Iterator<String> it=keys.iterator();
			while(it.hasNext()) {
				String n=it.next();
				int p=customer.get(n);
				System.out.print("("+n+","+p+")");
			} System.out.println();
		}
		sc.close();

	}

}
