package ����7��_�ǽ�����_�ٽ�Ǯ��;

import java.util.*;

public class ����3�� {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		//�Է�
		System.out.println("���� �̸��� �α��� �Է��ϼ���.(�� : korea 5000)");
		while(true) {
			System.out.print("���� �̸�, �α� >> ");
			String nation=sc.next();
			
			if(nation.equals("�׸�")) break;
			
			int population=sc.nextInt();
			nations.put(nation, population);
		}
		
		//�˻�
		while(true) {
			System.out.print("�α� �˻� >> ");
			String nation =sc.next();
			if(nation.equals("�׸�")) break;
				
			Integer n = nations.get(nation);
			if(n==null)
				System.out.println(nation+" ����� �����ϴ�.");
			else
				System.out.println(nation+"�� �α��� "+n);
		}
		
		sc.close();

	}

}
