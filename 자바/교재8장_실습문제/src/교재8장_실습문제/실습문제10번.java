package 교재8장_실습문제;

import java.io.*;
import java.util.*;

public class 실습문제10번 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashMap <String, String> h = new HashMap<String, String>();
		
		try {
			//해쉬맵에 전화번호 저장하기
			//파일 입출력과 scanner 연결
			sc=new Scanner(new FileReader("c:\\temp\\phone.txt"));
			
			//hasNext() : 가져올게 있으면 실행(true/false)
			while(sc.hasNext()) {
				String [] arr = sc.nextLine().split(" "); //공백으로 쪼개기
				h.put(arr[0],arr[1]); //해쉬맵에 삽입
			}
			System.out.println("총 "+ h.size() +"개의 전화번호를 읽었습니다.");
			
			//검색하기
			sc=new Scanner(System.in);
			while(true) {
				System.out.print("이름 >> ");
				String name=sc.next();
				
				//"그만" 입력시 종료됨
				if(name.equals("그만")) {
					break;
				}
				
				String pNum=h.get(name);
				if(pNum==null) //이름이 해쉬맵에 없으면 null 리턴
					System.out.println("찾는 이름이 없습니다.");
				else
					System.out.println(pNum);
			}
		}
		catch(IOException e) {
			System.out.println("파일을 찾을수 없습니다.");
		}
		sc.close();

	}

}
