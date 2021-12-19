package ����4��_�ǽ�����;

import java.util.Scanner;

class Day{
	private String work;
	//input view finish, run
	public void set(String work) {this.work=work;}
	public String get() {return work;}
	public void Show() {
		if(work==null) System.out.println("�����ϴ�.");
		else System.out.println(work+"�Դϴ�.");
	}
}

class MonthSchedule{
	Scanner scanner = new Scanner(System.in);
	
	private Day days[]; //Day, ���۷��� �迭 ����
	int day; //��¥
	
	MonthSchedule(int day){
		this.day=day;
		this.days=new Day[day];
		
		for(int i=0;i<days.length;i++) //Day, �迭 �� ���ҿ� ��ü ����
			days[i]=new Day();
	}
	
	public void input(){
		int workDay; //��¥
		String work; //����
		
		System.out.print("��¥(1~"+day+")?");
		workDay = scanner.nextInt();
		System.out.print("����(��ĭ�����Է�)?");
		work = scanner.next();
		
		days[workDay-1].set(work);  //���� �߰�
	} //�ϼ�
	
	public void view(){
		int viewDay;
		
		System.out.print("��¥(1~"+day+")?");
		viewDay = scanner.nextInt();
		System.out.print(viewDay+"���� �� ���� ");
		days[viewDay-1].Show();
	} //�ϼ�
	
	public void finish(){
		System.out.println("���α׷��� �����մϴ�.");
		scanner.close();
	} //�ϼ�
	
	public void run(){
		int num;
		
		while(true) {
			System.out.println("����(�Է�:1, ����:2, ������:3) >>");
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
	} //�ϼ�
}

public class �ǽ�����7�� {

	public static void main(String[] args) {
		System.out.println("�̹��� ������ ���� ���α׷�.");
		
		MonthSchedule april = new MonthSchedule(30);
		april.run();
	}

}
