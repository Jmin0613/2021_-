//package ����5��_�ǽ�����;
//
//import java.util.Scanner;
//
//interface Stack{
//	int length(); //���� ���ÿ� ����� ���� ����
//	int capacity(); //������ ��ü ���� ������ ���� ����
//	String pop(); //������ ��(top)�� �Ǽ� ����
//	boolean push(String val); //������ ��(top)�� ����� �Ǽ� ����
//}
//
//class StringStack implements Stack{
//	String[] stack; //����
//	int size; //���ÿ� ����� ����
//	int set; //����� �ε���
//	
//	StringStack(int size){ //������
//		this.size=size;
//	}
//	
//	@Override
//	int lenght() { //����� ����(num)�� ����
//		 return set;
//	}
//	
//	@Override
//	int capacity() { //��ü ���� ���� ����
//		return stack.length;
//	}
//	
//	@Override
//	String pop() { //������ ��(top)�� �Ǽ� ����
//		return stack[--set];
//	}
//	
//	@Override
//	boolean push(String val) { //������ ��(top)�� ����� �Ǽ� ����
//		
//	}
//}
//
//public class �ǽ�����9�� {
//
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		
//		System.out.print("�� ���� ���� ������ ũ�� >> ");
//		int size = scanner.nextInt();
//		StringStack s = new StringStack(size);
//		
//		String str;
//		while(true) {
//			System.out.print("���ڿ� �Է� >> ");
//			str=scanner.next();
//			if(str.equals("�׸�")) {
//				break;
//			}
//			s.push(str);
//		}
//		s.print();
//
//	}
//
//}
