package �б�3����;

import java.util.Scanner;

public class �迭������� {

	public static void main(String[] args) {
		Scanner scanner = new Scanner (System.in);
		
		int intArray[]= new int[5];
		int sum=0;
		
		System.out.print(intArray.length+"���� ������ �Է��Ͻÿ� >> ");
		for(int i=0;i<intArray.length;i++)
			intArray[i]=scanner.nextInt();
		
		for(int i=0;i<intArray.length;i++)
			sum+=intArray[i];
		
		System.out.print("����� "+(double)sum/intArray.length);
		scanner.close();

	}

}
