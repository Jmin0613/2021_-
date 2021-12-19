package ����4�忹��Ǯ��;

class Animal{
	int age;
	String name;
	
	Animal(){
		this.age=0;
		this.name="Unknown";
	}
	
	Animal(int age, String name){
		this.age=age;
		this.name=name;
	}
	
	public void sound() {
		System.out.println("�����Ҹ�");
	}
}

class Dog extends Animal{
	Dog(){
		this.name="Unknown";
		this.age=0;
	}
	
	Dog(int age, String name){
		this.age=age;
		this.name=name;
	}
	
	@Override
	public void sound() {
		System.out.println("�۸�!");
	}
}

class Cat extends Animal{
	Cat(){
		this.name="Unknown";
		this.age=0;
	}
	
	Cat(int age, String name){
		this.age=age;
		this.name=name;
	}
	
	@Override
	public void sound() {
		System.out.println("�߿˾߿�!");
	}
	
}

public class AnimalSound {

	public static void main(String[] args) {
		Dog dog = new Dog();
		dog.sound();
		
		Cat cat = new Cat();
		cat.sound();

	}

}
