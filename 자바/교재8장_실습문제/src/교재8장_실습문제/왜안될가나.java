package ����8��_�ǽ�����;
import java.util.*;
import java.io.*;
public class �־ȵɰ��� {

	public static void main(String[] args) {
		FileWriter fw = null;
		File f = new File("C:\\Users\\jumin\\OneDrive\\���� ȭ��\\8��_�ǽ�����1.txt");
		try {
			fw = new FileWriter(f);
			Scanner scanner = new Scanner(System.in);
			
			System.out.println("��ȭ��ȣ �Է� ���α׷��Դϴ�.");
			while(true) {
				System.out.print("�̸� ��ȭ��ȣ >> ");
				String line = scanner.nextLine(); // ������ �д´�.
				if(line.equals("�׸�"))
						break; // �Է� ����
				fw.write(line+"\r\n"); // �� �� ��� �����ϱ� ���� "\r\n"�� ���δ�.
			}
			System.out.println(f.getPath()+"�� �����Ͽ����ϴ�.");
			
			scanner.close();
			fw.close();
		} 
		catch (IOException e) { // ������ ������ �� ���� ��� ����
			e.printStackTrace();
		}

	}

}
