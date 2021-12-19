package 교재7장_실습문제_다시풀기;

import java.util.*;

class Location{
	String city; //도시이름
	double longitude; //경도
	double latitude; //위도
	
	Location(String city, double longitude, double latitude){
		this.city=city;
		this.longitude=longitude;
		this.latitude=latitude;
	}
	
	public void Show() {
		System.out.println(city+"\t"+longitude+"\t"+latitude);
	}
	
}

public class 문제6번 {

	public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
		
		HashMap<String, Location> c = new HashMap<String, Location>(4);
		
		
		//입력 및 저장
		System.out.println("도시, 경도, 위도를 입력하세요.");
		for(int i=0;i<4;i++) {
			System.out.print(">> ");
			String query =sc.nextLine();
			StringTokenizer st = new StringTokenizer(query,",");
			String city=st.nextToken().trim();
			double longitude=Double.parseDouble(st.nextToken().trim());
			double latitude=Double.parseDouble(st.nextToken().trim());
			
			Location loc = new Location(city, longitude, latitude);
			c.put(city, loc);
		}System.out.println("---------------------------------------");
		
		//출력
		Set<String> keys = c.keySet();
		Iterator<String> it = keys.iterator();
		while(it.hasNext()) {
			String key=it.next();
			Location value=c.get(key);
			c.get(key).Show();
		}System.out.println("---------------------------------------");
		
		//검색
		while(true) {
			System.out.print("도시 이름 >> ");
			String city=sc.next();
			
			if(city.equals("그만")) break;
			
			if(c.get(city)!=null)
				c.get(city).Show();
			else
				System.out.println(city+"는 없습니다.");
		}
		sc.close();

	}

}
