package �ǽ������ٽ�Ǯ��;

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
		System.out.println(company+"���� ���� "+year+"���� "+size+"��ġ TV");
	}
}

public class �ܿ�4_1 {

	public static void main(String[] args) {
		TV myTV = new TV("LG",2017,32);
		myTV.show();

	}

}
