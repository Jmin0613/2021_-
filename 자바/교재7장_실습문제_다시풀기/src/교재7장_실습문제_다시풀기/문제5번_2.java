package ����7��_�ǽ�����_�ٽ�Ǯ��;

import java.util.*;

class Student{
	private String name, dept, id;
	private double score;
	
	public Student(String name, String dept, String id, Double score) {
		this.name=name; this.dept=dept;
		this.id=id; this.score=score;
	}
	
	//Get
	public String GetName() {
		return name;
	}
	public String GetDept() {
		return dept;
	}
	public String GetId() {
		return id;
	}
	public double GetScore() {
		return score;
	}
	
	//Show
	public void Show() {
		System.out.println("�̸�:"+name);
		System.out.println("�а�:"+dept);
		System.out.println("�й�:"+id);
		System.out.println("�������:"+score);
	}
	
	//Find
	public void FindStudent() {
		System.out.println(name+", "+dept+", "+id+", "+score);
	}
	
	
}
public class ����5��_2 {

	public static void main(String[] args) {
		HashMap<String, Student> s = new HashMap<String, Student>(4);
		Scanner sc = new Scanner(System.in);
		
		
		//�Է�
		System.out.println("�л� �̸�,�а�,�й�,������� �Է��ϼ���.");
		for(int i=0;i<4;i++) {
			System.out.print(">> ");
			String query =sc.nextLine();
			StringTokenizer st = new StringTokenizer(query,",");
			String name=st.nextToken().trim();
			String dept=st.nextToken().trim();
			String id=st.nextToken().trim();
			double score=Double.parseDouble(st.nextToken().trim());
			
			Student std = new Student(name, dept, id, score);
			s.put(name, std);
		}System.out.println("---------------------------------------");
		
		//���
		Set<String> keys = s.keySet();
		Iterator<String> it = keys.iterator();
		while(it.hasNext()) {
			String key=it.next();
			Student value=s.get(key);
			s.get(key).Show();
			System.out.println("---------------------------------------");
		}
		
		//�˻�
		while(true) {
			System.out.print("�л� �̸� >> ");
			String name=sc.next();
			
			if(name.equals("�׸�")) break;
			
			if(s.get(name)!=null)
				s.get(name).FindStudent();
			else
				System.out.println(name+"�� �����ϴ�.");
		}
		sc.close();

	}

}
