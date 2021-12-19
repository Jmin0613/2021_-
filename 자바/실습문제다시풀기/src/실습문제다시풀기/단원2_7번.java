package 실습문제다시풀기;

import java.util.Scanner;

public class 단원2_7번 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("점 (x,y)의 좌표를 입력하시오 >> ");
		int x=scanner.nextInt();
		int y=scanner.nextInt();
		
		if((100<=x && x<=200) && (100<=y && y<=200)) {
			System.out.println("사각형 안에 점이 있습니다.");
		}else System.out.println("사각형 안에 점이 없습니다.");
		scanner.close();

	}

}
