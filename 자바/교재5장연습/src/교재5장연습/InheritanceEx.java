package ����5�忬��;

class Person {
	private int weight; //private ���� ����, class Person������ ���� ����
	int age; //����Ʈ�� ����, ���� ��Ű����� �԰���
	protected int height; //protected ���� ����, ���� ��Ű�� or ���ڽ�
	public String name; //��𼭵� �԰���
	
	//private �� weight�� �����ϱ� ���� �޼ҵ�
	public void setWeight(int weight) {
		this.weight=weight;
	}
	public int getWeight() {
		return weight;
	}
}

class Student extends Person{
	public void set() {
		age=30; //���� ��Ű���� ���� ����
		name="ȫ�浿"; //�ۺ��̶� ���� ����
		height=175; //���� ��Ű���� ����
		setWeight(99); //private�̶� �̷��� ���� ����
		
	}
}

public class InheritanceEx {

	public static void main(String[] args) {
		Student s =new Student();
		s.set();
	}

}
