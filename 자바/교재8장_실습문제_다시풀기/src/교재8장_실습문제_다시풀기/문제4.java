package ����8��_�ǽ�����_�ٽ�Ǯ��;

import java.io.*;
import java.util.*;

public class ����4 {

	public static void main(String[] args) {
		FileReader fin=null;
		
		try {
			fin=new FileReader("c:\\windows\\system.ini");
			System.out.println("c:\\windows\\system.ini ������ �о� ����մϴ�");
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
			System.out.println("����¿���.");
		}

	}

}
