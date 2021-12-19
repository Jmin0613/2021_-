package 실습문제다시풀기;

import java.util.Scanner;


public class 단원3_14 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		String course[]= {"Java","C++","HTML5","컴퓨터구조","안드로이드"};
		int score[]= {95,88,76,62,55};
		
		while(true) {
			System.out.print("과목이름 >> ");
			String name=scanner.nextLine();
			
			if(name.equals("그만"))
				break; //종료
			
			
			for(int i=0;i<score.length;i++) {
				if(course[i].equals(name)) {
					System.out.println(course[i]+"의 점수는 "+score[i]);
					break;
				}
				if(i==4) {
					System.out.println("없는 과목입니다.");
					break;
				}
			}
		}
		scanner.close();
	}

}
