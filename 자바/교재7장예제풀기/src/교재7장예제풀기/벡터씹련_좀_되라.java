package 교재7장예제풀기;

import java.util.Vector;

public class 벡터씹련_좀_되라 {

	public static void main(String[] args) {
		Vector <Integer> v = new Vector <Integer>(); //생성, integer(int)타입
		Vector <Integer> v5 = new Vector <Integer>(5); //초기용량이 5인 벡터
		Vector <String> s = new Vector <String>(); //string타입(문자열 벡터)

		//요소 삽입
		v.add(Integer.valueOf(5));
		v.add(Integer.valueOf(4));
		v.add(Integer.valueOf(-1));
		v.add(7);
		
		//요소 알아내기
		Integer obj = v.get(1); // 벡터 1번째 integer 객체 얻어냄
		int i = obj.intValue(); //obj에 있는 정수를 알아냄, 값은 4
		
		System.out.println("v.get(1) : " + i);
		
		i =  v.get(0);
		System.out.println("v.get(0) : " + i);
		
		//크기와 용량 알아내기
		int len = v.size(); //크기
		int cap = v.capacity(); //용량
		System.out.println("len : " + len);
		System.out.println("cap : " + cap);
		
		//인덱스 요소 삭제
		v.remove(1); //인덱스 1위치 요소 삭제
		System.out.println("삭제 후, v.get(1) : " + i);
		
		//모든 요소 삭제
		v.removeAllElements();

	}

}
