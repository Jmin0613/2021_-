package ����8��_�ǽ�����;

import java.io.*;
import java.util.*;

public class �ǽ�����6�� {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		FileReader fin=null;
		
		System.out.println("��ü ��θ��� �ƴ� �̸��� �Է��ϴ� ���, ������ ������Ʈ ���Ͽ� �־�� �մϴ�.");
		System.out.print("ù��° ���� �̸��� �Է��ϼ��� >> ");
		String f1=sc.nextLine();
		System.out.print("�ι��� ���� �̸��� �Է��ϼ��� >> ");
		String f2=sc.nextLine();
		
		int c;
		
		try {
			fin = new FileReader(f1);
			FileWriter fout=new FileWriter("appended.txt",true);
			while((c=fin.read())!=-1) {
				fout.write((char)c);
			}
			
			fin.close();
			fin=new FileReader(f2);
			while((c=fin.read())!=-1) {
				fout.write((char)c);
			}
			fin.close();
			fout.close();
			System.out.println("������Ʈ ���� �ؿ� appended.txt ���Ͽ� �����Ͽ����ϴ�.");
		}
		catch(IOException e) {
			System.out.println("����� ����");
		}
		sc.close();
	}

}
