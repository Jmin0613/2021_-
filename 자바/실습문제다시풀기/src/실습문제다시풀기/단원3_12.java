package 실습문제다시풀기;

public class 단원3_12 {

	public static void main(String[] args) {
		int sum=0;
		for(int i=0;i<args.length;i++) {
			try {
				sum+=Integer.parseInt(args[i]);
			}catch(NumberFormatException e) {
				continue;
			}
			
		}
		System.out.println(sum);


	}

}
