package 교재8장_실습문제;

import java.io.*;
import java.util.*;

public class 실습문제5 {
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		FileInputStream srcStream=null;
		FileInputStream destStream=null;
		
		System.out.println("전체 경로명이 아닌 파일 이름만 입력하는 경우, 파일은 프로젝트 폴더에 있어야합니다.");
		
		System.out.print("첫번째 파일 이름을 입력하세요 >> ");
		String src=sc.nextLine();
		
		System.out.print("두번째 파일 이름을 입력하세요 >> ");
		String dest=sc.nextLine();
		
		System.out.println(src+"와 "+dest+"를 비교합니다.");
		
		try {
			srcStream = new FileInputStream(src);
			destStream = new FileInputStream(dest);
			
			if(compare(srcStream, destStream))
				System.out.println("파일이 같습니다.");
			else
				System.out.println("파일이 다릅니다.");
			
			if(srcStream != null) srcStream.close();
			if(destStream != null) destStream.close();
			
			srcStream.close();
			destStream.close();
			
		}
		catch(IOException e){
			System.out.println("입출력 오류");
		}
		sc.close();
		
	}

	private static boolean compare(FileInputStream srcStream, FileInputStream destStream) {
		
		Scanner src=new Scanner(srcStream);
		Scanner dest=new Scanner(destStream);
		
		while(true) {
			if((!src.hasNext())&&dest.hasNext()) {
				src.close();
				dest.close();
				return false;
			}
			if(src.hasNext()) {
				String srcLine=src.nextLine();
				String destLine=dest.nextLine();
				
				if(srcLine.equals(destLine)) {
					src.close();
					dest.close();
					return false;
				}
					
			}
			src.close();
			dest.close();
			return true;
		}
	}

}
