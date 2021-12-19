package 실습문제다시풀기;

class TV{
	String company;
	int year;
	int size;
	
	public TV(String company, int year, int size) {
		this.company=company;
		this.year=year;
		this.size=size;
	}
	
	public void show() {
		System.out.println(company+"에서 만든 "+year+"년형 "+size+"인치 TV");
	}
}

public class 단원4_1 {

	public static void main(String[] args) {
		TV myTV = new TV("LG",2017,32);
		myTV.show();

	}

}
