package ����8��_��������;

import java.io.*;

public class ����2 {

	public static void main(String[] args) {
		InputStreamReader in = null;
		FileInputStream fin = null;
		
		try {
			fin=new FileInputStream("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\hangul.txt");
			in = new InputStreamReader(fin,"MS949");
			
			int c;
			System.out.println("���ڵ� ���� ������ "+in.getEncoding());
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			in.close();
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}

	}

}
