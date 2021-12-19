package 교재5장연습;

class Person {
	private int weight; //private 접근 지정, class Person에서만 접근 가능
	int age; //디폴트로 설정, 같은 패키지라면 쌉가능
	protected int height; //protected 집근 지정, 같은 패키지 or 내자식
	public String name; //어디서든 쌉가능
	
	//private 인 weight에 접근하기 위한 메소드
	public void setWeight(int weight) {
		this.weight=weight;
	}
	public int getWeight() {
		return weight;
	}
}

class Student extends Person{
	public void set() {
		age=30; //같은 패키지라서 접근 가능
		name="홍길동"; //퍼블릭이라 접근 가능
		height=175; //같은 패키지라서 가능
		setWeight(99); //private이라 이렇게 간접 접근
		
	}
}

public class InheritanceEx {

	public static void main(String[] args) {
		Student s =new Student();
		s.set();
	}

}
