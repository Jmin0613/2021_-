package ����4��_ĳ���ÿ���;

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
		Student s =new Student("���繮");
		p=s; //��ĳ����, PersonŸ�� p�� s�� ����Ű���� ġȯ��
		//Student��ü�� PersonŸ������ ��ĳ���õ� -> ��ĳ���õǾ� PersonŸ�԰�ü�� ��޵�, ���̻� StudentŬ������ ���� �Ұ���.
		/*	��ĳ������ ���۷����� ��ü �� ��� ����� ���� �Ұ���, ����Ŭ�������� ���ٰ���	*/
		
		System.out.println(p.name);
		
		/*	���� Person Ŭ������ ����� ������ ����	*/
		p.grade="A";
		//����
		p.department="Com";
		//����
		/*	p�� PersonŸ���ε�, grade�� department�� PersonŬ������ ���� �����Ƿ� �Ұ���*/
	}

}
