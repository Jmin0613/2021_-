package ����8��_�ǽ�����;

import java.io.*;

public class �ǽ�����8�� {

	public static void main(String[] args) {
		File f=new File("c:\\");
		File [] subfiles=f.listFiles();
		File max=null;
		
		for(int i=0;i<subfiles.length;i++) {
			if(i==0)
				max=subfiles[i];
			if(max.length()<subfiles[i].length())
				max=subfiles[i];
		}
		System.out.print("���� ū ������ "+max.getPath()+" "+max.length()+"����Ʈ");

	}

}
