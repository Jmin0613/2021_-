//package ����5��_�ǽ�����;
//
//import java.util.Scanner;
//
//abstract class Converter{
//	abstract protected double convert(double src); //�߻�޼ҵ� 
//	abstract protected String getSrcString(); //�߻�޼ҵ� 
//	abstract protected String getDestString(); //�߻�޼ҵ� 
//	protected double ratio; //����
//	
//	public void run() {
//		Scanner scanner = new Scanner(System.in);
//		System.out.println(getSrcString()+"�� "+getDestString()+"�� �ٲߴϴ�.");
//		System.out.print(getSrcString()+"�� �Է��ϼ���>> ");
//		double val = scanner.nextDouble();
//		double res=convert(val);
//		System.out.println("��ȯ ��� : "+res+getDestString()+"�Դϴ�.");
//		scanner.close();
//	}
//}
//
//class Won2Dollar extends Converter{ //�� -> �޷�
//	public Won2Dollar(int ratio) { //������ 
//		this.ratio=ratio;  //ratio -> �θ�Ŭ�������� ��ӹ��� ��� 
//	}
//	
//	protected double convert(double src) {
//		return src/ratio; // (��ȭ)/(ȯ��)
//	}
//	
//	protected String getSrcString() {
//		return "��";
//	}
//	
//	protected String getDestString() {
//		return "�޷�";
//	}
//}
//
//public class �ǽ�����3�� {
//
//	public static void main(String[] args) {
//		Won2Dollar toDollar = new Won2Dollar(1200);
//		toDollar.run();
//	}
//
//}
