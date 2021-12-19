package 교재7장_연습;

import java.util.*;

public class VectorEx {

	public static void main(String[] args) {
		Vector<Integer> v =new Vector<Integer>();
		v.add(5);
		v.add(4);
		v.add(-1);
		
		v.add(2,100); //4와 -1 사이, 인덱스 2자리에 들어가서 뒤쪽으로 한칸씩 뒤에 위치시킴
		
		System.out.println("벡터 내의 요소 객체 수 : "+v.size()); //벡터의 크기
		System.out.println("벡터의 현재 용량 : "+v.capacity()); //벡터용량 10, 이유는? 위에서 크기설정을 기본으로 해주었기때문.
		
		//크기만큼 i++해서 모든 요소 출력
		for(int i=0;i<v.size();i++) {
			int n=v.get(i);
			System.out.println(n);
		}
		
		//벡터 모든 정수 더하기
		int sum=0;
		for(int i=0;i<v.size();i++) {
			int n=v.elementAt(i);
			sum+=n;
		}
		
		System.out.println("벡터에 있는 정수 합 : "+sum);

	}

}

/*get이랑 element랑은 같음*/