package ����8��_��������;

import java.io.*;

public class ����11_��ϴ�����_���̳ʸ�����_��Ӻ��� {

	public static void main(String[] args) {
		File src = new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\��²ܹ�.png");
		
		File dest=new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\��²ܹ�.png");
		
		try {
			FileInputStream fi = new FileInputStream(src);
			FileOutputStream fo = new FileOutputStream(dest);
			
			byte [] buf = new byte[1024*10];
			while(true) {
				int n=fi.read(buf);
				fo.write(buf,0,n);
				if(n<buf.length)
					break;
			}
			
			fi.close();
			fo.close();
			System.out.println(src.getParent()+"�� "+dest.getParent()+"�� ������.");
		}
		catch(IOException e) {
			System.out.println("���� ���� ����.");
		}

	}

}
