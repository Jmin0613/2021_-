//package 교재7장_실습문제_다시풀기;
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
//		System.out.println("이름:"+name);
//		System.out.println("학과:"+dept);
//		System.out.println("학번:"+id);
//		System.out.println("학점평균:"+score);
//	}
//	
//	//Find
//	public void FindStudent() {
//		System.out.println(name+", "+dept+", "+id+", "+score);
//	}
//	
//	
//}
//public class 문제5번 {
//
//	public static void main(String[] args) {
//		ArrayList<Student> s = new ArrayList<Student>(4);
//		Scanner sc = new Scanner(System.in);
//		
//		
//		//입력
//		System.out.println("학생 이름,학과,학번,학점평균 입력하세요.");
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
//		//출력
//		for(int i=0;i<4;i++) {
//			s.get(i).Show();
//			System.out.println("---------------------------------------");
//		}
//		
//		//검색
//		while(true) {
//			System.out.print("학생 이름 >> ");
//			String name=sc.next();
//			
//			if(name.equals("그만"))
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
