package 背犁4厘抗力钱扁;

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
		System.out.println("匡澜家府");
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
		System.out.println("港港!");
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
		System.out.println("具克具克!");
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
