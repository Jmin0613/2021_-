//package 교재5장_실습문제;
//
//import java.util.Scanner;
//
//abstract class Converter{
//	abstract protected double convert(double src); //추상메소드 
//	abstract protected String getSrcString(); //추상메소드 
//	abstract protected String getDestString(); //추상메소드 
//	protected double ratio; //비율
//	
//	public void run() {
//		Scanner scanner = new Scanner(System.in);
//		System.out.println(getSrcString()+"을 "+getDestString()+"로 바꿉니다.");
//		System.out.print(getSrcString()+"을 입력하세요>> ");
//		double val = scanner.nextDouble();
//		double res=convert(val);
//		System.out.println("변환 결과 : "+res+getDestString()+"입니다.");
//		scanner.close();
//	}
//}
//
//class Won2Dollar extends Converter{ //원 -> 달러
//	public Won2Dollar(int ratio) { //생성자 
//		this.ratio=ratio;  //ratio -> 부모클래스에서 상속받은 멤버 
//	}
//	
//	protected double convert(double src) {
//		return src/ratio; // (원화)/(환율)
//	}
//	
//	protected String getSrcString() {
//		return "원";
//	}
//	
//	protected String getDestString() {
//		return "달러";
//	}
//}
//
//public class 실습문제3번 {
//
//	public static void main(String[] args) {
//		Won2Dollar toDollar = new Won2Dollar(1200);
//		toDollar.run();
//	}
//
//}
