package 교재4장_캐스팅연습;

class Person{
	String name;
	String id;
	
	public Person(String name) {
		this.name=name;
	}
}

class Student extends Person{
	String grade;
	String department;
	
	public Student(String name) {
		super(name);
	}
}

public class UpcastingEx {

	public static void main(String[] args) {
		Person p;
		Student s =new Student("이재문");
		p=s; //업캐스팅, Person타입 p는 s를 가리키도록 치환됨
		//Student객체는 Person타입으로 업캐스팅됨 -> 업캐스팅되어 Person타입객체로 취급됨, 더이상 Student클래스에 접근 불가능.
		/*	업캐스팅한 레퍼런스는 객체 내 모든 멤버에 접근 불가능, 슈퍼클래스에만 접근가능	*/
		
		System.out.println(p.name);
		
		/*	오직 Person 클래스의 멤버만 접근이 가능	*/
		p.grade="A";
		//오류
		p.department="Com";
		//오류
		/*	p는 Person타입인데, grade와 department는 Person클래스에 있지 않으므로 불가능*/
	}

}
