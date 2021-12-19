package 교재8장_연습문제;

import java.io.*;

public class 예제1 {

	public static void main(String[] args) {
		FileReader fin = null;
		
		try {
			fin = new FileReader("C:\\Windows\\system.ini");
			int c;
			while((c=fin.read())!=-1)
				System.out.print((char)c);
			fin.close();//스트림 닫아주기
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}

	}

}
