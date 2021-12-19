package 학교5주차1강;

import java.util.Scanner;

public class Rectangle {
	int width;
	int height;
	
	public Rectangle() {}
	
	public int getAread() {
		return width*height;
	}
	
	public static void main(String[] args) {
		Rectangle rect=new Rectangle(); //객체 생성
		Scanner scanner=new Scanner(System.in);
		System.out.print(">> ");
		
		rect.width=scanner.nextInt();
		rect.height=scanner.nextInt();
		
		System.out.println("사각형의 면적은 "+rect.getAread());
		
		scanner.close();
	}
}
