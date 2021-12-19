package 교재8장_연습문제;

import java.io.*;

public class 예제4_FileOutputStream으로_바이너리_파일쓰기 {

	public static void main(String[] args) {
		byte b[] = {7,51,3,4,-1,24};
		
		try {
			FileOutputStream fout = new FileOutputStream("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.out");
			//FileOutputStream fout = new FileOutputStream("c:\\temp\\test.out");
			
			for(int i=0;i<b.length;i++)
				fout.write(b[i]);
			fout.close();
		}
		catch(IOException e) {
			System.out.println("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.out에 저장할 수 없었습니다.\n경로명을 확인해주세요.");
			return;
		}
		
		System.out.println("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.out을 저장했습니다.");

	}

}
