package ����7�忹��Ǯ��;

import java.util.*;

public class �迭_���_�÷� {

	public static void main(String[] args) {
		ArrayList<String> a = new ArrayList<String>(); //ArrayList����
		
		//��� ����
		a.add("Hello");
		a.add("Hi");
		a.add("Java");
		a.add(null);
		a.add(2,"Sahni");
		
		//��� �˾Ƴ���
		String str = a.get(1);
		//ũ�� �˾Ƴ���
		int len = a.size();
		
		//��� ����
		String s = new String ("bye");
		a.add(s);
		a.remove(s);

		//��� ��� ����
		a.clear();
	}

}
