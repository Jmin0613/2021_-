package ����8��_�ǽ�����_�ٽ�Ǯ��;

import java.io.*;

public class ����2 {

	public static void main(String[] args) {
		FileReader fin = null;
		
		try {
			fin = new FileReader("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\phone.txt");
			System.out.println("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\phone.txt �� ����մϴ�.");
			
			int c;
			while((c=fin.read())!=-1)
				System.out.print((char)c);
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����� ����.");
		}
		
	}

}
