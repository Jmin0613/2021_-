package ����7��_����;

import java.util.*;

public class VectorEx {

	public static void main(String[] args) {
		Vector<Integer> v =new Vector<Integer>();
		v.add(5);
		v.add(4);
		v.add(-1);
		
		v.add(2,100); //4�� -1 ����, �ε��� 2�ڸ��� ���� �������� ��ĭ�� �ڿ� ��ġ��Ŵ
		
		System.out.println("���� ���� ��� ��ü �� : "+v.size()); //������ ũ��
		System.out.println("������ ���� �뷮 : "+v.capacity()); //���Ϳ뷮 10, ������? ������ ũ�⼳���� �⺻���� ���־��⶧��.
		
		//ũ�⸸ŭ i++�ؼ� ��� ��� ���
		for(int i=0;i<v.size();i++) {
			int n=v.get(i);
			System.out.println(n);
		}
		
		//���� ��� ���� ���ϱ�
		int sum=0;
		for(int i=0;i<v.size();i++) {
			int n=v.elementAt(i);
			sum+=n;
		}
		
		System.out.println("���Ϳ� �ִ� ���� �� : "+sum);

	}

}

/*get�̶� element���� ����*/