package 교재8장_실습문제;

import java.io.*;

public class 실습문제2 {

	public static void main(String[] args) {
		FileReader fin=null;
		File f = new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\8장_실습문제1.txt");
		
		try {
			fin = new FileReader(f);
			System.out.println(f.getParent()+"를 출력합니다.");
			
			int c;
			while((c=fin.read()) != -1) {
				System.out.print((char)c);
			}
			fin.close();
		}
		catch(IOException e){
			System.out.println("입출력 오류");
		}

	}

}
