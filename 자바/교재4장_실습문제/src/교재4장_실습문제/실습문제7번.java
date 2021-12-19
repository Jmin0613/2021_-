package 교재4장_실습문제;

import java.util.Scanner;

class Day{
	private String work;
	//input view finish, run
	public void set(String work) {this.work=work;}
	public String get() {return work;}
	public void Show() {
		if(work==null) System.out.println("없습니다.");
		else System.out.println(work+"입니다.");
	}
}

class MonthSchedule{
	Scanner scanner = new Scanner(System.in);
	
	private Day days[]; //Day, 래퍼런스 배열 선언
	int day; //날짜
	
	MonthSchedule(int day){
		this.day=day;
		this.days=new Day[day];
		
		for(int i=0;i<days.length;i++) //Day, 배열 각 원소에 객체 생성
			days[i]=new Day();
	}
	
	public void input(){
		int workDay; //날짜
		String work; //할일
		
		System.out.print("날짜(1~"+day+")?");
		workDay = scanner.nextInt();
		System.out.print("할일(빈칸없이입력)?");
		work = scanner.next();
		
		days[workDay-1].set(work);  //할일 추가
	} //완성
	
	public void view(){
		int viewDay;
		
		System.out.print("날짜(1~"+day+")?");
		viewDay = scanner.nextInt();
		System.out.print(viewDay+"일의 할 일은 ");
		days[viewDay-1].Show();
	} //완성
	
	public void finish(){
		System.out.println("프로그램을 종료합니다.");
		scanner.close();
	} //완성
	
	public void run(){
		int num;
		
		while(true) {
			System.out.println("할일(입력:1, 보기:2, 끝내기:3) >>");
			num = scanner.nextInt();
			switch(num) {
				case 1:
					input();
					break;
				case 2:
					view();
					break;
				case 3:
					finish();
					break;
			}
			System.out.println();
		}
	} //완성
}

public class 실습문제7번 {

	public static void main(String[] args) {
		System.out.println("이번달 스케쥴 관리 프로그램.");
		
		MonthSchedule april = new MonthSchedule(30);
		april.run();
	}

}
