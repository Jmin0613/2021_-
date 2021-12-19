package ����8��_�ǽ�����;

import java.io.*;
import java.util.*;

public class �ǽ�����5 {
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		FileInputStream srcStream=null;
		FileInputStream destStream=null;
		
		System.out.println("��ü ��θ��� �ƴ� ���� �̸��� �Է��ϴ� ���, ������ ������Ʈ ������ �־���մϴ�.");
		
		System.out.print("ù��° ���� �̸��� �Է��ϼ��� >> ");
		String src=sc.nextLine();
		
		System.out.print("�ι�° ���� �̸��� �Է��ϼ��� >> ");
		String dest=sc.nextLine();
		
		System.out.println(src+"�� "+dest+"�� ���մϴ�.");
		
		try {
			srcStream = new FileInputStream(src);
			destStream = new FileInputStream(dest);
			
			if(compare(srcStream, destStream))
				System.out.println("������ �����ϴ�.");
			else
				System.out.println("������ �ٸ��ϴ�.");
			
			if(srcStream != null) srcStream.close();
			if(destStream != null) destStream.close();
			
			srcStream.close();
			destStream.close();
			
		}
		catch(IOException e){
			System.out.println("����� ����");
		}
		sc.close();
		
	}

	private static boolean compare(FileInputStream srcStream, FileInputStream destStream) {
		
		Scanner src=new Scanner(srcStream);
		Scanner dest=new Scanner(destStream);
		
		while(true) {
			if((!src.hasNext())&&dest.hasNext()) {
				src.close();
				dest.close();
				return false;
			}
			if(src.hasNext()) {
				String srcLine=src.nextLine();
				String destLine=dest.nextLine();
				
				if(srcLine.equals(destLine)) {
					src.close();
					dest.close();
					return false;
				}
					
			}
			src.close();
			dest.close();
			return true;
		}
	}

}
