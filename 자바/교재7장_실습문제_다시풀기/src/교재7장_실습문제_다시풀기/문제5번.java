//package ����7��_�ǽ�����_�ٽ�Ǯ��;
//
//import java.util.*;
//
//class Student{
//	private String name, dept, id;
//	private double score;
//	
//	public Student(String name, String dept, String id, Double score) {
//		this.name=name; this.dept=dept;
//		this.id=id; this.score=score;
//	}
//	
//	//Get
//	public String GetName() {
//		return name;
//	}
//	public String GetDept() {
//		return dept;
//	}
//	public String GetId() {
//		return id;
//	}
//	public double GetScore() {
//		return score;
//	}
//	
//	//Show
//	public void Show() {
//		System.out.println("�̸�:"+name);
//		System.out.println("�а�:"+dept);
//		System.out.println("�й�:"+id);
//		System.out.println("�������:"+score);
//	}
//	
//	//Find
//	public void FindStudent() {
//		System.out.println(name+", "+dept+", "+id+", "+score);
//	}
//	
//	
//}
//public class ����5�� {
//
//	public static void main(String[] args) {
//		ArrayList<Student> s = new ArrayList<Student>(4);
//		Scanner sc = new Scanner(System.in);
//		
//		
//		//�Է�
//		System.out.println("�л� �̸�,�а�,�й�,������� �Է��ϼ���.");
//		for(int i=0;i<4;i++) {
//			System.out.print(">> ");
//			String query =sc.nextLine();
//			StringTokenizer st = new StringTokenizer(query,",");
//			String name=st.nextToken().trim();
//			String dept=st.nextToken().trim();
//			String id=st.nextToken().trim();
//			double score=Double.parseDouble(st.nextToken().trim());
//			
//			Student std = new Student(name, dept, id, score);
//			s.add(std);
//		}System.out.println("---------------------------------------");
//		
//		//���
//		for(int i=0;i<4;i++) {
//			s.get(i).Show();
//			System.out.println("---------------------------------------");
//		}
//		
//		//�˻�
//		while(true) {
//			System.out.print("�л� �̸� >> ");
//			String name=sc.next();
//			
//			if(name.equals("�׸�"))
//				break;
//			
//			for(int i=0;i<4;i++) {
//				if(s.get(i).GetName().equals(name))
//					s.get(i).FindStudent();
//			}
//		}
//		sc.close();
//
//	}
//
//}
