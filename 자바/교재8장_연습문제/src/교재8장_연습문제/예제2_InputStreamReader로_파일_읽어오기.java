package 교재8장_연습문제;

import java.io.*;

public class 예제2_InputStreamReader로_파일_읽어오기 {

	public static void main(String[] args) {
		InputStreamReader in = null;
		FileInputStream fin = null;
		//fin이 in한테 정보전해줌
		//in은 문자집합에 맞춰서 변환
		
		try {
			fin = new FileInputStream("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\hangul.txt");
			in = new InputStreamReader(fin,"MS949"); //fin-> in가 fin에게 텍스트 가져오라 명령,  "MS949"-> 문자집합 지정
			
			int c;
			System.out.println("인코딩 문자 집합은 "+in.getEncoding()); //문자집합 이름 리턴
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			//스트림 닫아주기
			fin.close();
			in.close();
		}
		catch(IOException e){
			System.out.println("입출력 오류");
		}

	}

}
