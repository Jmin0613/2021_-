package 학교4주차3과제;

public class 실습문제7번 {

	public static void main(String[] args) {
		int arr[]=new int[10];
		int sum=0;
		
		System.out.print("랜덤한 정수들 : ");
		for(int i=0;i<10;i++) {
			int j=(int)(Math.random()*10+1);
			arr[i]=j;
			sum+=j;
			System.out.print(j+" ");
		}System.out.println();
		
		System.out.println("평군은 "+sum/10);

	}

}
