package 교재7장_연습;

import java.util.*;

public class 스택내용반대로만드는제네릭메소드만들기 {
	public static <T> GStack<T> reverse(GStack<T> a) {
		
		GStack<T> s = new GStack<T>();
		while(true) {
			T tmp;
			tmp=a.pop();
			if(tmp==null)
				break;
			else
				s.push(tmp);
		}
		return s;
	}

	public static void main(String[] args) {
		GStack<Double> gs=new GStack<Double>();
		
		for(int i=0;i<5;i++) {
			gs.push(new Double(i));
		}
		gs.reverse(gs);
		for(int i=0;i<5;i++) {
			System.out.println(gs.pop());
		}

	}

}
