package ����3�忹��Ǯ��;

public class for_each��Ȱ�� {
	enum Week {��,ȭ,��,��,��,��,��};

	public static void main(String[] args) {
		int n [] = {1,2,3,4,5};
		String names[] = {"���","��","�ٳ���","üŰ","����","����"};
		
		int sum=0;
		
		for(int k :n) {
			System.out.print(k+" ");
			sum+=k;
		}
		System.out.println("����"+sum);
		
		for(String k : names) {
			System.out.print(k+" ");
		}
		System.out.println();
		
		for(Week day : Week.values()) {
			System.out.print(day+"���� ");
		}
		System.out.println();

	}

}
