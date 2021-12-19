package ����7��_�ǽ�����;

import java.util.*;

class Location{
	String city;
	double longitude;
	double latitude;
	
	Location(String city, double longitude, double latitude){
		this.city=city;
		this.longitude=longitude;
		this.latitude=latitude;
	}
	
	public void show() {
		System.out.println(city+"\t"+longitude+"\t"+latitude);
	}
	
}

public class �ǽ�����6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		HashMap<String, Location> c = new HashMap<String, Location>(4);
		
		
		//�Է� �� ����
		System.out.println("����, �浵, ������ �Է��ϼ���.");
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
		
		//���
		Set<String> keys = c.keySet();
		Iterator<String> it = keys.iterator();
		while(it.hasNext()) {
			String key=it.next();
			Location value=c.get(key);
			c.get(key).show();
		}System.out.println("---------------------------------------");
		
		//�˻�
		while(true) {
			System.out.print("���� �̸� >> ");
			String city=sc.next();
			
			if(city.equals("�׸�")) break;
			
			if(c.get(city)!=null)
				c.get(city).show();
			else
				System.out.println(city+"�� �����ϴ�.");
		}
		sc.close();
	}

}
