package ����8��_��������;

import java.io.*;

public class ����6_FileInputStream����_���̳ʸ�_�����б� {

	public static void main(String[] args) {
		byte b[]= new byte[6];
		
		try {
			FileInputStream fin = new FileInputStream("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\test.out");
			
			int c, n=0;
			while((c=fin.read())!=-1) {
				b[n]=(byte)c;
				n++;
			}
			
			System.out.println("�迭 ���");
			for(int i=0;i<b.length;i++)
				System.out.print(b[i]+" ");
			System.out.println();
			
			fin.close();
		}
		catch(IOException e) {
			System.out.println("����¿���. ��θ� üũ.");
		}

	}

}
