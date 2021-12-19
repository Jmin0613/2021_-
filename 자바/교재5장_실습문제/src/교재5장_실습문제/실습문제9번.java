//package 교재5장_실습문제;
//
//import java.util.Scanner;
//
//interface Stack{
//	int length(); //현재 스택에 저장된 개수 리턴
//	int capacity(); //스택의 전체 저장 가능한 개수 리턴
//	String pop(); //스택의 톱(top)에 실수 저장
//	boolean push(String val); //스택의 톱(top)에 저장된 실수 리턴
//}
//
//class StringStack implements Stack{
//	String[] stack; //스택
//	int size; //스택에 저장된 개수
//	int set; //저장된 인덱스
//	
//	StringStack(int size){ //생성자
//		this.size=size;
//	}
//	
//	@Override
//	int lenght() { //저장된 개수(num)를 리턴
//		 return set;
//	}
//	
//	@Override
//	int capacity() { //전체 스택 길이 리턴
//		return stack.length;
//	}
//	
//	@Override
//	String pop() { //스택의 톱(top)에 실수 저장
//		return stack[--set];
//	}
//	
//	@Override
//	boolean push(String val) { //스택의 톱(top)에 저장된 실수 리턴
//		
//	}
//}
//
//public class 실습문제9번 {
//
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		System.out.print("총 스택 저장 공간의 크기 >> ");
//		int size = scanner.nextInt();
//		StringStack s = new StringStack(size);
//		
//		String str;
//		while(true) {
//			System.out.print("문자열 입력 >> ");
//			str=scanner.next();
//			if(str.equals("그만")) {
//				break;
//			}
//			s.push(str);
//		}
//		s.print();
//
//	}
//
//}
