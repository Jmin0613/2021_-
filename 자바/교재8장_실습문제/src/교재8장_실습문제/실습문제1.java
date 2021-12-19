package 교재8장_실습문제;

import java.util.*;
import java.io.*;

public class 실습문제1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("전화번호 입력 프로그램입니다.");
		
		FileWriter fout = null;
		File f= new File("C:\\Users\\jumin\\OneDrive\\바탕 화면\\8장_실습문제1.txt");
		
		try {
			fout = new FileWriter(f);
			while(true) {
				System.out.print("이름 전화번호 >> ");
				String line=sc.nextLine();
				
				if(line.equals("그만"))
					break;
				
				else {
					fout.write(line);
					fout.write("\r\n");
				}
			}
			System.out.println(f.getPath()+"에 저장하였습니다.");
			
			sc.close();
			fout.close();
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}

	}

}
