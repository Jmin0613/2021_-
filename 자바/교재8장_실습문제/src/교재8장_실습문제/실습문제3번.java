package ����8��_�ǽ�����;

import java.io.*;

public class �ǽ�����3�� {

	public static void main(String[] args) {
		FileReader fin = null;
		File f=new File("c:\\windows\\system.ini");
		
		try {
			fin = new FileReader(f);
			int c;
			while((c=fin.read())!=-1) {
				c=Character.toUpperCase(c);
				System.out.print((char)c);
			}
			
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}
	}

}
