package �б�4����3����;

import java.util.Scanner;

public class ����6������ {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int [] unit = {50000,10000,1000,500,100,50,10,1};
	 
		System.out.print("�ݾ��� �Է��Ͻÿ� >> ");
		int money = scanner.nextInt(); //�� �Է�
		
		for(int i=0;i<unit.length;i++) {
			if(money/unit[i]>0) {
				System.out.println(unit[i]+"�� ¥�� : "+money/unit[i]+"��");
				money%=unit[i]; //�Ž����� ����
			}
		}
		scanner.close();
	}

}
