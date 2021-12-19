package 교재8장_연습문제;

import java.io.*;

public class 예제2 {

	public static void main(String[] args) {
		InputStreamReader in = null;
		FileInputStream fin = null;
		
		try {
			fin=new FileInputStream("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\hangul.txt");
			in = new InputStreamReader(fin,"MS949");
			
			int c;
			System.out.println("인코딩 문자 집합은 "+in.getEncoding());
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			in.close();
			fin.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}

	}

}
