package ����7��_�ǽ�����_�ٽ�Ǯ��;

import java.util.*;

public class ����8�� {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashMap<String, Integer> customer = new HashMap<String, Integer>();
		
		System.out.println("** ����Ʈ ���� ���α׷��Դϴ� **");
		while(true) {
			System.out.print("�̸��� ����Ʈ �Է� >");
			String name = sc.next();
			int point =sc.nextInt();
			
			if(name.equals("�׸�"))
				break;
			
			//�ű�
			if(customer.get(name)==null)
				customer.put(name,point);
			//����
			else {
				int acc=customer.get(name);
				customer.put(name, acc+point);
			}
			
			//���
			Set<String> keys = customer.keySet();
			Iterator<String> it=keys.iterator();
			while(it.hasNext()) {
				String n=it.next();
				int p=customer.get(n);
				System.out.print("("+n+","+p+")");
			} System.out.println();
		}
		sc.close();

	}

}
