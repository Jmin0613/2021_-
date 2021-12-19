package 교재8장_연습문제;

import java.io.*;
import java.util.*;

public class 예제7_버퍼스트림을_이용한_출력 {

	public static void main(String[] args) {
		FileReader fin =null;
		int c;
		
		try {
			fin = new FileReader("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\test.txt");
			BufferedOutputStream out = new BufferedOutputStream(System.out,5);
			
			while((c=fin.read())!=-1)
				out.write(c);
			
			new Scanner(System.in).nextLine();
			out.flush();
			fin.close();
			out.close();
		}
		catch(IOException e) {
			e.printStackTrace();
		}

	}

}
