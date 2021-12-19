//package 실습문제다시풀기;
//
//import java.util.Scanner;
//
//public class 단원2_4번 {
//	Scanner scanner = new Scanner(System.in);
//	
//	System.out.print("3개의 정수 입력 >> ");
//	int num1 = scanner.nextInt();
//	int num2 = scanner.nextInt();
//	int num3 = scanner.nextInt();
//	
//	int mid;
//	if((num2>num1 && num1>num3)||(num3>num1 && num1>num2)) {
//		mid= num1;
//	}
//	if((num1>num2 && num2>num3)||(num3>num2 && num2>num1)) {
//		mid= num2;
//	}
//	if((num1>num3 && num3>num2)||(num3>num1 && num2>num3)) {
//		mid= num3;
//	}
//	
//	scanner.close();
//}
