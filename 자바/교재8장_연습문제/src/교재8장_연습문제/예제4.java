package 교재8장_연습문제;

import java.io.*;

public class 예제4 {

	public static void main(String[] args) {
		byte b[]= {1,2,3,4,5,6};
		
		try {
			FileOutputStream fout = new FileOutputStream("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.out");
			
			for(int i=0;i<b.length;i++)
				fout.write(b[i]);
			
			fout.close();
		}
		catch(IOException e) {
			System.out.println("저장못함");
			return;
		}
		
		System.out.println("저장함");

	}

}
