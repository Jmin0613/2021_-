package ����8�忹��;

import java.io.*;

public class FileReader�÷� {

	public static void main(String[] args) {
		FileReader fin = new FileReader("C:\\\\Users\\\\user\\\\Desktop\\\\hello.txt");
		
		int c;
		while((c=fin.read())!=-1) {
			System.out.print((char)c);
		}
		fin.close();

	}

}
