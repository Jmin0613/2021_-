package ����7��_�ǽ�����;

import java.util.*;

public class �ǽ�����2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Character> a =new ArrayList<Character>(6);
		
		//�Է�
		System.out.print("6���� ������ �� ĭ���� �и� �Է�(A/B/C/D/F) >> ");
		for(int i=0;i<6;i++) {
			char c=sc.next().charAt(0);
			a.add(c);
		}
		
		//���
		double sum=0;
		double num;
		for(int i=0;i<6;i++) {
			if(a.get(i)=='A') num=4.0;
			else if(a.get(i)=='B') num=3.0;
			else if(a.get(i)=='C') num=2.0;
			else if(a.get(i)=='D') num=1.0;
			else num=0;
			
			sum+=num;
		}
		double ave=sum/6;
		
		System.out.println(ave);
		
		sc.close();

	}

}
