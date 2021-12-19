package 교재8장_연습문제;

import java.io.*;

public class 예제10_바이너리파일_복사 {

	public static void main(String[] args) {
		File src = new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\우는꿀벌.png");
		
		File dest=new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\crying_bee.png");
		
		int c;
		try {
			FileInputStream fi = new FileInputStream(src);
			FileOutputStream fo = new FileOutputStream(dest);
			
			while((c=fi.read())!=-1)
				fo.write((byte)c);
			
			fi.close();
			fo.close();
			System.out.println(src.getParent()+"를 "+dest.getParent()+"에 복사함.");
		}
		catch(IOException e) {
			System.out.println("파일 복사 오류");
		}

	}

}
