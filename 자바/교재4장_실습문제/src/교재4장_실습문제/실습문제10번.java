package ����4��_�ǽ�����;

import java.util.Scanner;

class Dictionary{
	private static String[] kor = {"���","�Ʊ�","��","�̷�","���"};
	private static String[] eng = {"love","baby","money","future","hope"};
	
	public static String kor2Eng(String word) {
		//�˻� �ڵ�
		int i;
		String check="";
		
		for(i=0;i<kor.length;i++) {
			if(kor[i].equals(word)) {
				check=(word+"�� "+eng[i]);
				break;
			}
		}
		if(i==kor.length)
			check=(word+"�� ���� ������ �����ϴ�.");
			
		return check;
	}
}

class DicApp{
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		String word;
//		System.out.println("�ѿ� �ܾ� �˻� ���α׷� �Դϴ�");
//		while(true) {
//			System.out.print("�ѱ� �ܾ�?");
//			word=scanner.next();
//			
//			if(word.equals("�׸�"))
//				break;
//			
//			System.out.println(Dictionary.kor2Eng(word));
//		}
//
//	}
//	
//}

public class �ǽ�����10�� {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String word;
		System.out.println("�ѿ� �ܾ� �˻� ���α׷� �Դϴ�");
		while(true) {
			System.out.print("�ѱ� �ܾ�?");
			word=scanner.next();
			
			if(word.equals("�׸�"))
				break;
			
			System.out.println(Dictionary.kor2Eng(word));
		}

	}

}
