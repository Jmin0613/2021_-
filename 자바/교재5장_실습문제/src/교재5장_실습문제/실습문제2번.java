//package ����5��_�ǽ�����;
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
//	public ColorTV(int size, int color) { //������
//		super(size);
//		this.color=color;
//		
//	}
//
//	public void printProperty(){
//		System.out.println(getSize()+"��ġ "+color+"�÷�");
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
//		System.out.print("���� IPTV�� "+adress+" �ּ��� ");
//		super.printProperty();
//	}
//}
//
//public class �ǽ�����2�� {
//
//	public static void main(String[] args) {
//		IPTV iptv = new IPTV("192.1.1.2", 32, 2045);
//
//		iptv.printProperty();
//	}
//
//}
