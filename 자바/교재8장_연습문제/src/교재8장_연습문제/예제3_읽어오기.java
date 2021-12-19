package 교재8장_연습문제;

import java.io.*;

public class 예제3_읽어오기 {

	public static void main(String[] args) {
		FileInputStream fin =null;
		InputStreamReader in =null;
		
		try {
			fin= new FileInputStream("C:\\Users\\Jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.txt");
			in = new InputStreamReader(fin,"MS949");
			
			int c;
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			fin.close();
			in.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}

	}

}
