package �б�3����;

import java.util.Scanner;

public class break���̿��غ��� {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("exit�� �Է��ϸ� �����");
		while(true) {
			System.out.print(">>");
			String text = scanner.nextLine();
			if(text.equals("exit"))
				break;
		}
		System.out.println("�����մϴ�");
		
		scanner.close();
	}
}