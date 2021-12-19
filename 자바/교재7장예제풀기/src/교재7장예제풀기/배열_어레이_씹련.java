package 교재7장예제풀기;

import java.util.*;

public class 배열_어레이_씹련 {

	public static void main(String[] args) {
		ArrayList<String> a = new ArrayList<String>(); //ArrayList생성
		
		//요소 삽입
		a.add("Hello");
		a.add("Hi");
		a.add("Java");
		a.add(null);
		a.add(2,"Sahni");
		
		//요소 알아내기
		String str = a.get(1);
		//크기 알아내기
		int len = a.size();
		
		//요소 삭제
		String s = new String ("bye");
		a.add(s);
		a.remove(s);

		//모든 요소 삭제
		a.clear();
	}

}
