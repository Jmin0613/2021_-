package ����8��_��������;

import java.io.*;

public class ����4 {

	public static void main(String[] args) {
		byte b[]= {1,2,3,4,5,6};
		
		try {
			FileOutputStream fout = new FileOutputStream("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.out");
			
			for(int i=0;i<b.length;i++)
				fout.write(b[i]);
			
			fout.close();
		}
		catch(IOException e) {
			System.out.println("�������");
			return;
		}
		
		System.out.println("������");

	}

}
