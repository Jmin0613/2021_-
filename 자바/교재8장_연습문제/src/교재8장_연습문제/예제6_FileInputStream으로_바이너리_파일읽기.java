package 교재8장_연습문제;

import java.io.*;

public class 예제6_FileInputStream으로_바이너리_파일읽기 {

	public static void main(String[] args) {
		byte b[]= new byte[6];
		
		try {
			FileInputStream fin = new FileInputStream("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.out");
			
			int c, n=0;
			while((c=fin.read())!=-1) {
				b[n]=(byte)c;
				n++;
			}
			
			System.out.println("배열 출력");
			for(int i=0;i<b.length;i++)
				System.out.print(b[i]+" ");
			System.out.println();
			
			fin.close();
		}
		catch(IOException e) {
			System.out.println("입출력오류. 경로명 체크.");
		}

	}

}
