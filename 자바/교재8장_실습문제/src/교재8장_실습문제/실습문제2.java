package ����8��_�ǽ�����;

import java.io.*;

public class �ǽ�����2 {

	public static void main(String[] args) {
		FileReader fin=null;
		File f = new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\8��_�ǽ�����1.txt");
		
		try {
			fin = new FileReader(f);
			System.out.println(f.getParent()+"�� ����մϴ�.");
			
			int c;
			while((c=fin.read()) != -1) {
				System.out.print((char)c);
			}
			fin.close();
		}
		catch(IOException e){
			System.out.println("����� ����");
		}

	}

}
