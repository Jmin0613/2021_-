package 교재4장_실습문제;

import java.util.Scanner;

class Phone{
	String name; //이름
	String tel; //전화번호
	
	Phone(String name, String tel){
		this.name=name;
		this.tel=tel;
	}
	
	boolean getNumber(String name) { //이름으로 전화번호 구하기
		if(this.name.equals(name)) { //동일하면 true, 다르면 false
			System.out.println(name+"의 번호는 "+this.tel+"입니다.");
			return true;
		}else
			return false;
	}
}

class PhoneBook{
	int HumanNum; //저장할 사람의 수
	private Phone phones[]; //Phone 객체 배열 생성
	boolean nameTel;
	
	PhoneBook(int num){
		this.HumanNum=num;
		this.phones= new Phone[HumanNum];
	}
	
	public void bookSet(int num, String name, String tel) { //전화번호부 만들기 -> 이름과 번호 저장
		phones[num]=new Phone(name,tel);
	}
	
	public void Search(String name) { //전화번보후 검색
		int i;
		for(i=0;i<phones.length;i++) {
			nameTel=phones[i].getNumber(name); //이름과 번호가 있는지 검사
			if(nameTel==true)
				break;
		}
		if (i==this.phones.length) //다 거치고 나왔을때 -> 전화번호부에 없음
			System.out.println(name+"이 없습니다.");
	}
}

public class 실습문제8번 {

	public static void main(String[] args) {
		Scanner scanner =new Scanner(System.in);
		
		int humanNum;
		String name;
		String tel;
		
		System.out.print("인원수>>");
		humanNum=scanner.nextInt();
		PhoneBook phoneBook = new PhoneBook(humanNum); //인원수만큼 PhoneBook 객체 선언
		
		for(int i=0;i<humanNum;i++) {
			System.out.print("이름과 전화번호(이름과 번호는 빈 칸없이 입력)>>");
			name=scanner.next();
			tel=scanner.next();
			
			phoneBook.bookSet(i,name,tel); //객체 배열 생성
		}System.out.println("저장되었습니다...");
		
		while(true) {
			System.out.print("검색할 이름>>");
			name=scanner.next();
			
			if(name.equals("그만"))
				break;
			else
				phoneBook.Search(name);
		}
		
		scanner.close();
	}

}
