package ����7��_�ǽ�����;

import java.util.*;

public class �ǽ�����1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Vector<Integer> v = new Vector<Integer>();
		
		//�Է�
		System.out.print("����(-1�� �Էµ� ������) >> ");
		
		while(true) {
			int num=sc.nextInt();
			if (num==-1) break;
			else v.add(num);
		}
		
		//ū �� ���ϱ�
		int max=v.get(0); // �ӽ÷� �ʱ�ȭ
		for(int i=0;i<v.size();i++) {
			if(max<=v.get(i)) max=v.get(i);
		}
		System.out.println("���� ū ���� "+max);
		
		sc.close();
	}
}
