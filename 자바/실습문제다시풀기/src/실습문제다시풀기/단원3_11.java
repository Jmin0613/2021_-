package �ǽ������ٽ�Ǯ��;

import java.util.Scanner;

public class �ܿ�3_11 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int sum=0;
		
		for(int i=0;i<args.length;i++)
			sum+=Integer.parseInt(args[i]);
		
		System.out.println(sum);
		
		scanner.close();

	}

}
