package ����4��_�ǽ�����;

import java.util.Scanner;

class Phone{
	String name; //�̸�
	String tel; //��ȭ��ȣ
	
	Phone(String name, String tel){
		this.name=name;
		this.tel=tel;
	}
	
	boolean getNumber(String name) { //�̸����� ��ȭ��ȣ ���ϱ�
		if(this.name.equals(name)) { //�����ϸ� true, �ٸ��� false
			System.out.println(name+"�� ��ȣ�� "+this.tel+"�Դϴ�.");
			return true;
		}else
			return false;
	}
}

class PhoneBook{
	int HumanNum; //������ ����� ��
	private Phone phones[]; //Phone ��ü �迭 ����
	boolean nameTel;
	
	PhoneBook(int num){
		this.HumanNum=num;
		this.phones= new Phone[HumanNum];
	}
	
	public void bookSet(int num, String name, String tel) { //��ȭ��ȣ�� ����� -> �̸��� ��ȣ ����
		phones[num]=new Phone(name,tel);
	}
	
	public void Search(String name) { //��ȭ������ �˻�
		int i;
		for(i=0;i<phones.length;i++) {
			nameTel=phones[i].getNumber(name); //�̸��� ��ȣ�� �ִ��� �˻�
			if(nameTel==true)
				break;
		}
		if (i==this.phones.length) //�� ��ġ�� �������� -> ��ȭ��ȣ�ο� ����
			System.out.println(name+"�� �����ϴ�.");
	}
}

public class �ǽ�����8�� {

	public static void main(String[] args) {
		Scanner scanner =new Scanner(System.in);
		
		int humanNum;
		String name;
		String tel;
		
		System.out.print("�ο���>>");
		humanNum=scanner.nextInt();
		PhoneBook phoneBook = new PhoneBook(humanNum); //�ο�����ŭ PhoneBook ��ü ����
		
		for(int i=0;i<humanNum;i++) {
			System.out.print("�̸��� ��ȭ��ȣ(�̸��� ��ȣ�� �� ĭ���� �Է�)>>");
			name=scanner.next();
			tel=scanner.next();
			
			phoneBook.bookSet(i,name,tel); //��ü �迭 ����
		}System.out.println("����Ǿ����ϴ�...");
		
		while(true) {
			System.out.print("�˻��� �̸�>>");
			name=scanner.next();
			
			if(name.equals("�׸�"))
				break;
			else
				phoneBook.Search(name);
		}
		
		scanner.close();
	}

}
