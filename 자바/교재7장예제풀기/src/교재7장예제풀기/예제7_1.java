package 교재7장예제풀기;

import java.util.*;

public class 예제7_1 {

	public static void main(String[] args) {
		Vector<Integer> v = new Vector <Integer>();
		v.add(5);
		v.add(4);
		v.add(-1);
		
		v.add(2,100); //4와 -1 사이에 100삽입
		System.out.println("백터 내의 요소 객체 수 : " + v.size());
		System.out.println("백터의 현재 용량 : "+ v.capacity());
		
		//모든 요소 출력
		for(int i=0;i<v.size();i++) {
			int n= v.get(i);
			System.out.println(n);
		}
		
		//벡터 속의 모든 정수 더하기
		int sum=0;
		for(int i =0;i<v.size();i++) {
			int n= v.get(i);
			sum+=n;
		}
		System.out.println("벡터에 있는 정수의 합 : " +sum);

	}

}
