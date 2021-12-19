//package 교재5장_실습문제;
//
//class TV{
//	private int size;
//	public TV(int size) { this.size=size;}
//	protected int getSize() { return size;}
//}
//
//class ColorTV extends TV{
//	int color;
//	
//	public ColorTV(int size, int color) { //생성자
//		super(size);
//		this.color=color;
//		
//	}
//
//	public void printProperty(){
//		System.out.println(getSize()+"인치 "+color+"컬러");
//	}
//}
//
//class IPTV extends ColorTV{
//	String adress;
//	
//	public IPTV(String adress, int size, int color) {
//		super(size, color);
//		this.adress=adress;
//	}
//	
//	@Override
//	public void printProperty() {
//		System.out.print("나의 IPTV는 "+adress+" 주소의 ");
//		super.printProperty();
//	}
//}
//
//public class 실습문제2번 {
//
//	public static void main(String[] args) {
//		IPTV iptv = new IPTV("192.1.1.2", 32, 2045);
//
//		iptv.printProperty();
//	}
//
//}
