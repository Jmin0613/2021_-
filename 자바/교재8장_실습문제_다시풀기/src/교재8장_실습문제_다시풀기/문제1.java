package ����8��_�ǽ�����_�ٽ�Ǯ��;

import java.io.*;
import java.util.*;

public class ����1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		FileWriter fout=null;
		
		System.out.println("��ȭ��ȣ �Է� ���α׷��Դϴ�.");
		try {
			fout = new FileWriter("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\phone.txt");
			
			
			while(true) {
				System.out.print("�̸� ��ȭ��ȣ >> ");
				String line=sc.nextLine();
				
				if(line.equals("�׸�"))
					break;
				
				fout.write(line);
				fout.write("\r\n");
			}
			System.out.println("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\�ڹ�_8�ܿ�_����\\phone.txt �� �����Ͽ����ϴ�.");
			
			fout.close();
			sc.close();
		}
		catch(IOException e){
			System.out.println("����� ����. ���� ��θ� Ȯ�ιٶ�.");
		}

	}

}
