//package �����������߰����;
//
//import java.util.*;
//
//public class �߰�2020_5�� {
//
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		System.out.print("�迭�� ������ �Է� : ");
//		int n=scanner.nextInt();
//		int arr[] = new int[n];
//		
//		int cnt=0;
//		while(cnt!=n) {
//			try {
//				System.out.print("arr["+cnt+"] �� �Է� : ");
//				arr[cnt]=scanner.nextInt();
//				cnt++;
//			}
//			catch(ArrayIndexOutOfBoundsException e) {
//				System.out.println("�迭�� �ε����� ������ ���");
//				cnt--;
//			}
//		}
//		
//		int i=0;
//		while(true) {
//			try {
//				System.out.print(arr[i]+"�� ���� �� �Է� : ");
//				int d=scanner.nextInt();
//				System.out.println(arr[i]+"�� "+d+"�� ���� ����� "+arr[i]/d+"�Դϴ�.");
//				i++;
//			}
//			catch(ArithmeticException e) {
//				System.out.println("0���� ���� �� �����ϴ�.");
//			}
//		}
//		scanner.close();
//	}
//
//}