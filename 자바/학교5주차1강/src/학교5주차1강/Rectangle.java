package �б�5����1��;

import java.util.Scanner;

public class Rectangle {
	int width;
	int height;
	
	public Rectangle() {}
	
	public int getAread() {
		return width*height;
	}
	
	public static void main(String[] args) {
		Rectangle rect=new Rectangle(); //��ü ����
		Scanner scanner=new Scanner(System.in);
		System.out.print(">> ");
		
		rect.width=scanner.nextInt();
		rect.height=scanner.nextInt();
		
		System.out.println("�簢���� ������ "+rect.getAread());
		
		scanner.close();
	}
}
