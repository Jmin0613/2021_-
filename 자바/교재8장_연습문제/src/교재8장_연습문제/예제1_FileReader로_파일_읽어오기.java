package ����8��_��������;

import java.io.*;

public class ����1_FileReader��_����_�о���� {

	public static void main(String[] args) {
		FileReader fin = null;
		
		try {
			fin = new FileReader("C:\\Windows\\system.ini"); //���� �Է� ��Ʈ�� ����
			int c;
			while((c=fin.read())!=-1) //���� �ϳ��� ���� ������ �б�
				System.out.print((char)c);
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}

	}

}
