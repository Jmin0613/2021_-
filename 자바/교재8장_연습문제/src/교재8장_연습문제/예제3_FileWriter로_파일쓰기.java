package 교재8장_연습문제;

import java.io.*;
import java.util.*;

public class 예제3_FileWriter로_파일쓰기 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		FileWriter fout = null;
		
		int c;
		
		try {
			fout = new FileWriter("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.txt");
			
			while(true) {
				String line = sc.nextLine();
				
				if(line.length()==0)
					break;
				fout.write(line,0,line.length());
				fout.write("\r\n",0,2);
			}
			fout.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}
		sc.close();

	}

}
