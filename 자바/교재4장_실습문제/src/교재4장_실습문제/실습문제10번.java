package 교재4장_실습문제;

import java.util.Scanner;

class Dictionary{
	private static String[] kor = {"사랑","아기","돈","미래","희망"};
	private static String[] eng = {"love","baby","money","future","hope"};
	
	public static String kor2Eng(String word) {
		//검색 코드
		int i;
		String check="";
		
		for(i=0;i<kor.length;i++) {
			if(kor[i].equals(word)) {
				check=(word+"은 "+eng[i]);
				break;
			}
		}
		if(i==kor.length)
			check=(word+"는 저의 사전에 없습니다.");
			
		return check;
	}
}

class DicApp{
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		String word;
//		System.out.println("한영 단어 검색 프로그램 입니다");
//		while(true) {
//			System.out.print("한글 단어?");
//			word=scanner.next();
//			
//			if(word.equals("그만"))
//				break;
//			
//			System.out.println(Dictionary.kor2Eng(word));
//		}
//
//	}
//	
//}

public class 실습문제10번 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String word;
		System.out.println("한영 단어 검색 프로그램 입니다");
		while(true) {
			System.out.print("한글 단어?");
			word=scanner.next();
			
			if(word.equals("그만"))
				break;
			
			System.out.println(Dictionary.kor2Eng(word));
		}

	}

}
