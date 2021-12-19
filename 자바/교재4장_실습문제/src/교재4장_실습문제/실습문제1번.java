package 교재4장_실습문제;

class TV{
	String company;
	int year;
	int size;
	
	public TV(String company, int year, int size){ //생성자
		this.company=company;
		this.year=year;
		this.size=size;
	}
	
	public void show() {
		System.out.println(company+"에서 만든 "+year+"년형 "+size+"인치 TV");
	}
}

public class 실습문제1번 {
	
	public static void main(String[] args) {
		TV myTV = new TV("LG",2017,32);
		myTV.show();

	}

}
