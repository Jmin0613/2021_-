package �б�4����3����;

public class �ǽ�����7�� {

	public static void main(String[] args) {
		int arr[]=new int[10];
		int sum=0;
		
		System.out.print("������ ������ : ");
		for(int i=0;i<10;i++) {
			int j=(int)(Math.random()*10+1);
			arr[i]=j;
			sum+=j;
			System.out.print(j+" ");
		}System.out.println();
		
		System.out.println("���� "+sum/10);

	}

}
