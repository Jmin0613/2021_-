package ����8��_�ǽ�����_�ٽ�Ǯ��;

import java.io.*;

public class ����3 {

	public static void main(String[] args) {
		FileReader fin = null;
		
		try {
			fin = new FileReader("c:\\windows\\system.ini");
			
			int c;
			while((c=fin.read())!=-1) {
				c=Character.toUpperCase(c);
				System.out.print((char)c);
			}
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����� ����.");
		}
		
	}

}
