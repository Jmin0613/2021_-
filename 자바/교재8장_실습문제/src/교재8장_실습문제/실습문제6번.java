package 교재8장_실습문제;

import java.io.*;
import java.util.*;

public class 실습문제6번 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		FileReader fin=null;
		
		System.out.println("전체 경로명이 아닌 이름만 입력하는 경우, 파일은 프로젝트 파일에 있어야 합니다.");
		System.out.print("첫번째 파일 이름을 입력하세요 >> ");
		String f1=sc.nextLine();
		System.out.print("두번쨰 파일 이름을 입력하세요 >> ");
		String f2=sc.nextLine();
		
		int c;
		
		try {
			fin = new FileReader(f1);
			FileWriter fout=new FileWriter("appended.txt",true);
			while((c=fin.read())!=-1) {
				fout.write((char)c);
			}
			
			fin.close();
			fin=new FileReader(f2);
			while((c=fin.read())!=-1) {
				fout.write((char)c);
			}
			fin.close();
			fout.close();
			System.out.println("프로젝트 폴더 밑에 appended.txt 파일에 저장하였습니다.");
		}
		catch(IOException e) {
			System.out.println("입출력 오류");
		}
		sc.close();
	}

}
