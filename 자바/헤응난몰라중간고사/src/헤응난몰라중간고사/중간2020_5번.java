//package 헤응난몰라중간고사;
//
//import java.util.*;
//
//public class 중간2020_5번 {
//
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		System.out.print("배열의 개수를 입력 : ");
//		int n=scanner.nextInt();
//		int arr[] = new int[n];
//		
//		int cnt=0;
//		while(cnt!=n) {
//			try {
//				System.out.print("arr["+cnt+"] 값 입력 : ");
//				arr[cnt]=scanner.nextInt();
//				cnt++;
//			}
//			catch(ArrayIndexOutOfBoundsException e) {
//				System.out.println("배열의 인덱스가 범위를 벗어남");
//				cnt--;
//			}
//		}
//		
//		int i=0;
//		while(true) {
//			try {
//				System.out.print(arr[i]+"를 나눌 수 입력 : ");
//				int d=scanner.nextInt();
//				System.out.println(arr[i]+"을 "+d+"로 나눈 결과는 "+arr[i]/d+"입니다.");
//				i++;
//			}
//			catch(ArithmeticException e) {
//				System.out.println("0으로 나눌 수 없습니다.");
//			}
//		}
//		scanner.close();
//	}
//
//}