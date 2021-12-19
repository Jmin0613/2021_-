package 교재8장_실습문제_다시풀기;

import java.io.*;
import java.util.*;

public class 문제4 {

	public static void main(String[] args) {
		FileReader fin=null;
		
		try {
			fin=new FileReader("c:\\windows\\system.ini");
			System.out.println("c:\\windows\\system.ini 파일을 읽어 출력합니다");
			Scanner sc = new Scanner(fin);
			
			int i=1;
			
			while(sc.hasNext()) {
				String line =sc.nextLine();
				System.out.printf("%4d"+ " : ", i);
				System.out.println(line);
				i++;
			}
			
			fin.close();
			sc.close();
		}
		catch(IOException e) {
			System.out.println("입출력오류.");
		}

	}

}
