package �б�3����;

public class for_each��_���� {

	public static void main(String[] args) {
		int[] num = {1,2,3,4,5};
		int sum=0;
		
		for(int k : num) //�ݺ��� ������ k�� num[0], num[1], ..., num[4]������ ����
			sum+=k;
		
		System.out.println("���� "+sum);
		
		
		
		String names[]= {"���","��","�ٳ���","ü��","����","����"};
		
		for(String s : names) //�ݺ��� ������ s�� names[0],names[1],...,names[5]�� ����
			System.out.print(s+" ");
		System.out.println();

		
		
		enum Week {��, ȭ, ��, ��, ��, ��, ��}
		for(Week day : Week.values()) //�ݺ��� ������ day�� ��,ȭ,...�Ϸ� ����
			System.out.print(day+"���� ");

	}

}
