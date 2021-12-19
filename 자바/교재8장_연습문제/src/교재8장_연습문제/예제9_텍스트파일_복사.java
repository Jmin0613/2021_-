package 교재8장_연습문제;

import java.io.*;

public class 예제9_텍스트파일_복사 {

	public static void main(String[] args) {
		File src = new File("c:\\windows\\system.ini");
		File dest = new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\system.txt");
		
		int c;
		try {
			FileReader fr = new FileReader(src);
			FileWriter fw = new FileWriter(dest);
			
			while((c=fr.read())!=-1)
				fw.write((char)c);
			
			fr.close();
			fw.close();
			
			System.out.println(src.getParent()+"를 "+dest.getParent()+"로 복사함.");
		}
		catch(IOException e) {
			System.out.println("파일 복사 오류");
		}

	}

}
