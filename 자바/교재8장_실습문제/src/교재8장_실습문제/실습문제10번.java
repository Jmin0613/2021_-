package ����8��_�ǽ�����;

import java.io.*;
import java.util.*;

public class �ǽ�����10�� {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashMap <String, String> h = new HashMap<String, String>();
		
		try {
			//�ؽ��ʿ� ��ȭ��ȣ �����ϱ�
			//���� ����°� scanner ����
			sc=new Scanner(new FileReader("c:\\temp\\phone.txt"));
			
			//hasNext() : �����ð� ������ ����(true/false)
			while(sc.hasNext()) {
				String [] arr = sc.nextLine().split(" "); //�������� �ɰ���
				h.put(arr[0],arr[1]); //�ؽ��ʿ� ����
			}
			System.out.println("�� "+ h.size() +"���� ��ȭ��ȣ�� �о����ϴ�.");
			
			//�˻��ϱ�
			sc=new Scanner(System.in);
			while(true) {
				System.out.print("�̸� >> ");
				String name=sc.next();
				
				//"�׸�" �Է½� �����
				if(name.equals("�׸�")) {
					break;
				}
				
				String pNum=h.get(name);
				if(pNum==null) //�̸��� �ؽ��ʿ� ������ null ����
					System.out.println("ã�� �̸��� �����ϴ�.");
				else
					System.out.println(pNum);
			}
		}
		catch(IOException e) {
			System.out.println("������ ã���� �����ϴ�.");
		}
		sc.close();

	}

}
