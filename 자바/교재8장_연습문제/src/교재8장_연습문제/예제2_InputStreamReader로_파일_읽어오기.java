package ����8��_��������;

import java.io.*;

public class ����2_InputStreamReader��_����_�о���� {

	public static void main(String[] args) {
		InputStreamReader in = null;
		FileInputStream fin = null;
		//fin�� in���� ����������
		//in�� �������տ� ���缭 ��ȯ
		
		try {
			fin = new FileInputStream("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\hangul.txt");
			in = new InputStreamReader(fin,"MS949"); //fin-> in�� fin���� �ؽ�Ʈ �������� ���,  "MS949"-> �������� ����
			
			int c;
			System.out.println("���ڵ� ���� ������ "+in.getEncoding()); //�������� �̸� ����
			while((c=in.read())!=-1)
				System.out.print((char)c);
			
			//��Ʈ�� �ݾ��ֱ�
			fin.close();
			in.close();
		}
		catch(IOException e){
			System.out.println("����� ����");
		}

	}

}
