package ����8��_��������;

import java.io.*;

public class ����4_FileOutputStream����_���̳ʸ�_���Ͼ��� {

	public static void main(String[] args) {
		byte b[] = {7,51,3,4,-1,24};
		
		try {
			FileOutputStream fout = new FileOutputStream("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.out");
			//FileOutputStream fout = new FileOutputStream("c:\\temp\\test.out");
			
			for(int i=0;i<b.length;i++)
				fout.write(b[i]);
			fout.close();
		}
		catch(IOException e) {
			System.out.println("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.out�� ������ �� �������ϴ�.\n��θ��� Ȯ�����ּ���.");
			return;
		}
		
		System.out.println("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.out�� �����߽��ϴ�.");

	}

}
