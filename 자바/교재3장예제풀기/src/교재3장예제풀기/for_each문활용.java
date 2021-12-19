package 교재3장예제풀기;

public class for_each문활용 {
	enum Week {월,화,수,목,금,토,일};

	public static void main(String[] args) {
		int n [] = {1,2,3,4,5};
		String names[] = {"사과","배","바나나","체키","딸기","포도"};
		
		int sum=0;
		
		for(int k :n) {
			System.out.print(k+" ");
			sum+=k;
		}
		System.out.println("합은"+sum);
		
		for(String k : names) {
			System.out.print(k+" ");
		}
		System.out.println();
		
		for(Week day : Week.values()) {
			System.out.print(day+"요일 ");
		}
		System.out.println();

	}

}
