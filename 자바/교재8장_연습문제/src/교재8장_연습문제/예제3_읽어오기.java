package ����8��_��������;

import java.io.*;

public class ����3_�о���� {

	public static void main(String[] args) {
		FileInputStream fin =null;
		InputStreamReader in =null;
		
		try {
			fin= new FileInputStream("C:\\Users\\Jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.txt");
			in = new InputStreamReader(fin,"MS949");
			
			int c;
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			fin.close();
			in.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}

	}

}
