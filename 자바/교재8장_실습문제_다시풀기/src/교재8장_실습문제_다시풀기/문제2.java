package 교재8장_실습문제_다시풀기;

import java.io.*;

public class 문제2 {

	public static void main(String[] args) {
		FileReader fin = null;
		
		try {
			fin = new FileReader("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\phone.txt");
			System.out.println("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\phone.txt 를 출력합니다.");
			
			int c;
			while((c=fin.read())!=-1)
				System.out.print((char)c);
			fin.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류.");
		}
		
	}

}
