package ����7�忹��Ǯ��;

import java.util.Vector;

public class ���;÷�_��_�Ƕ� {

	public static void main(String[] args) {
		Vector <Integer> v = new Vector <Integer>(); //����, integer(int)Ÿ��
		Vector <Integer> v5 = new Vector <Integer>(5); //�ʱ�뷮�� 5�� ����
		Vector <String> s = new Vector <String>(); //stringŸ��(���ڿ� ����)

		//��� ����
		v.add(Integer.valueOf(5));
		v.add(Integer.valueOf(4));
		v.add(Integer.valueOf(-1));
		v.add(7);
		
		//��� �˾Ƴ���
		Integer obj = v.get(1); // ���� 1��° integer ��ü ��
		int i = obj.intValue(); //obj�� �ִ� ������ �˾Ƴ�, ���� 4
		
		System.out.println("v.get(1) : " + i);
		
		i =  v.get(0);
		System.out.println("v.get(0) : " + i);
		
		//ũ��� �뷮 �˾Ƴ���
		int len = v.size(); //ũ��
		int cap = v.capacity(); //�뷮
		System.out.println("len : " + len);
		System.out.println("cap : " + cap);
		
		//�ε��� ��� ����
		v.remove(1); //�ε��� 1��ġ ��� ����
		System.out.println("���� ��, v.get(1) : " + i);
		
		//��� ��� ����
		v.removeAllElements();

	}

}
