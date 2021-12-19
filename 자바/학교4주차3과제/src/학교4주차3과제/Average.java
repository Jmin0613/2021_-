package 학교4주차3과제;

import java.util.Scanner;

public class Average {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int sum=0;
		
		for(int i=0;i<args.length;i++)
			sum+=Integer.parseInt(args[i]);
		
		System.out.println(sum);
		
		scanner.close();
	}

}
