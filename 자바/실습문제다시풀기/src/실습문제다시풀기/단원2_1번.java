package �ǽ������ٽ�Ǯ��;

import java.util.Scanner;

public class �ܿ�2_1�� {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		final double rate = 1100.0;
		
		System.out.print("��ȭ�� �Է��ϼ���(���� ��)>> ");
		int won=scanner.nextInt();
		double dollar=won/rate;
		System.out.print(won+"���� $"+ dollar+"�Դϴ�.");
		
		scanner.close();
	}

}
