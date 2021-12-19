package 교재8장_실습문제;

import java.io.*;
import java.util.*;

public class 실습문제4번 {
	
	public static void main(String[] args) {
		FileReader fin = null;
		File f=new File("c:\\windows\\system.ini");
		
		System.out.println(f.getParent()+"의 파일을 출력합니다.");
		try {
			fin = new FileReader(f);
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
			System.out.println("입출력 오류");
		}
	}
}
