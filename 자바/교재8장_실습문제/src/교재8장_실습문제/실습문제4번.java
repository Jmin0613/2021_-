package ����8��_�ǽ�����;

import java.io.*;
import java.util.*;

public class �ǽ�����4�� {
	
	public static void main(String[] args) {
		FileReader fin = null;
		File f=new File("c:\\windows\\system.ini");
		
		System.out.println(f.getParent()+"�� ������ ����մϴ�.");
		try {
			fin = new FileReader(f);
			Scanner sc = new Scanner(fin);
			int i=1;
			
			while(sc.hasNext()) {
				String line =sc.nextLine();
				System.out.printf("%4d"+ " : ", i);
				System.out.println(line);
				i++;
			}
			
			fin.close();
			sc.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}
	}
}
