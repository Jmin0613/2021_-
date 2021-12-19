package 교재8장_실습문제;

import java.io.*;

public class 실습문제8번 {

	public static void main(String[] args) {
		File f=new File("c:\\");
		File [] subfiles=f.listFiles();
		File max=null;
		
		for(int i=0;i<subfiles.length;i++) {
			if(i==0)
				max=subfiles[i];
			if(max.length()<subfiles[i].length())
				max=subfiles[i];
		}
		System.out.print("가장 큰 파일은 "+max.getPath()+" "+max.length()+"바이트");

	}

}
