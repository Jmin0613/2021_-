package 교재8장_실습문제_다시풀기;

import java.io.*;
import java.util.*;

public class 문제1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		FileWriter fout=null;
		
		System.out.println("전화번호 입력 프로그램입니다.");
		try {
			fout = new FileWriter("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\phone.txt");
			
			
			while(true) {
				System.out.print("이름 전화번호 >> ");
				String line=sc.nextLine();
				
				if(line.equals("그만"))
					break;
				
				fout.write(line);
				fout.write("\r\n");
			}
			System.out.println("C:\\Users\\jumin\\OneDrive\\바탕 화면\\자바_8단원_연습\\phone.txt 에 저장하였습니다.");
			
			fout.close();
			sc.close();
		}
		catch(IOException e){
			System.out.println("입출력 오류. 파일 경로명 확인바람.");
		}

	}

}
