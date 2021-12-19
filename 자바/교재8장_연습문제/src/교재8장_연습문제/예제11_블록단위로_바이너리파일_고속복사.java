package 교재8장_연습문제;

import java.io.*;

public class 예제11_블록단위로_바이너리파일_고속복사 {

	public static void main(String[] args) {
		File src = new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\우는꿀벌.png");
		
		File dest=new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\우는꿀벌.png");
		
		try {
			FileInputStream fi = new FileInputStream(src);
			FileOutputStream fo = new FileOutputStream(dest);
			
			byte [] buf = new byte[1024*10];
			while(true) {
				int n=fi.read(buf);
				fo.write(buf,0,n);
				if(n<buf.length)
					break;
			}
			
			fi.close();
			fo.close();
			System.out.println(src.getParent()+"를 "+dest.getParent()+"에 복사함.");
		}
		catch(IOException e) {
			System.out.println("파일 복사 오류.");
		}

	}

}
