package ����8��_��������;

import java.io.*;

public class ����9_�ؽ�Ʈ����_���� {

	public static void main(String[] args) {
		File src = new File("c:\\windows\\system.ini");
		File dest = new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\system.txt");
		
		int c;
		try {
			FileReader fr = new FileReader(src);
			FileWriter fw = new FileWriter(dest);
			
			while((c=fr.read())!=-1)
				fw.write((char)c);
			
			fr.close();
			fw.close();
			
			System.out.println(src.getParent()+"�� "+dest.getParent()+"�� ������.");
		}
		catch(IOException e) {
			System.out.println("���� ���� ����");
		}

	}

}
