package ����7��_�ǽ�����_�ٽ�Ǯ��;

import java.util.*;

public class ����7�� {

	public static void main(String[] args) {
		HashMap<String, Double> s = new HashMap<String, Double>(5);
		Scanner sc = new Scanner(System.in);
		
		//�л� ���� �Է�
		System.out.println("�̷����бݰ����ý����Դϴ�.");
		for(int i=0;i<5;i++) {
			System.out.print("�̸��� ���� >");
			String name=sc.next();
			double score=sc.nextDouble();
			
			s.put(name, score);
		}
		
		//���� ���� �Է�
		System.out.print("���л� ���� ���� ���� �Է� >> ");
		double standard=sc.nextDouble();
		
		//���л� ��� ���
		Set<String> keys = s.keySet();
		Iterator<String> it=keys.iterator();
		
		while(it.hasNext()) {
			String name = it.next();
			double score=s.get(name);
			if (score>=standard)
				System.out.print(name + " ");
		}
		
		sc.close();

	}

}
