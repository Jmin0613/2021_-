package 교재8장_실습문제;

import java.io.*;

public class 실습문제3번 {

	public static void main(String[] args) {
		FileReader fin = null;
		File f=new File("c:\\windows\\system.ini");
		
		try {
			fin = new FileReader(f);
			int c;
			while((c=fin.read())!=-1) {
				c=Character.toUpperCase(c);
				System.out.print((char)c);
			}
			
			fin.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}
	}

}
