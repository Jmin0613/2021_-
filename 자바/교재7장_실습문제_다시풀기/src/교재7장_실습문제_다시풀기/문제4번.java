package ����7��_�ǽ�����_�ٽ�Ǯ��;

import java.util.*;

public class ����4�� {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Vector<Integer> v = new Vector<Integer>();
		
		int sum=0;
		int ave=0;
		int cnt=0;
		
		while(true) {
			System.out.print("������ �Է� (0 �Է½� ����) >> ");
			int num=sc.nextInt();
			if(num==0) break;
			
			v.add(num);
			
			sum+=num;
			cnt++;
			ave=sum/cnt;
			
			for(int i=0;i<v.size();i++)
				System.out.print(v.get(i)+" ");
			System.out.println();
			
			System.out.println("���� ��� "+ave);
		}
		
		sc.close();

	}

}
