package ����8��_�ǽ�����;

import java.util.*;
import java.io.*;

public class �ǽ�����1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("��ȭ��ȣ �Է� ���α׷��Դϴ�.");
		
		FileWriter fout = null;
		File f= new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\8��_�ǽ�����1.txt");
		
		try {
			fout = new FileWriter(f);
			while(true) {
				System.out.print("�̸� ��ȭ��ȣ >> ");
				String line=sc.nextLine();
				
				if(line.equals("�׸�"))
					break;
				
				else {
					fout.write(line);
					fout.write("\r\n");
				}
			}
			System.out.println(f.getPath()+"�� �����Ͽ����ϴ�.");
			
			sc.close();
			fout.close();
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}

	}

}
