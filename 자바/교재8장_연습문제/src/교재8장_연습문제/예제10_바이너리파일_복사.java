package ����8��_��������;

import java.io.*;

public class ����10_���̳ʸ�����_���� {

	public static void main(String[] args) {
		File src = new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\��²ܹ�.png");
		
		File dest=new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\crying_bee.png");
		
		int c;
		try {
			FileInputStream fi = new FileInputStream(src);
			FileOutputStream fo = new FileOutputStream(dest);
			
			while((c=fi.read())!=-1)
				fo.write((byte)c);
			
			fi.close();
			fo.close();
			System.out.println(src.getParent()+"�� "+dest.getParent()+"�� ������.");
		}
		catch(IOException e) {
			System.out.println("���� ���� ����");
		}

	}

}
