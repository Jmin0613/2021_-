package 실습문제다시풀기;

public class 단원3_7 {

	public static void main(String[] args) {
		int arr[]= new int[10];
		int sum=0;
		
		System.out.print("랜덤한 정수들 : ");
		for(int i=0;i<10;i++) {
			arr[i]=(int)(Math.random()*10+1);
			sum+=arr[i];
			System.out.print(arr[i]+" ");
		}System.out.println();
		
		System.out.println("평군은 "+sum/10);


	}

}
