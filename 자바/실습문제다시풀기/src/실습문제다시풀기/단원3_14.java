package �ǽ������ٽ�Ǯ��;

import java.util.Scanner;


public class �ܿ�3_14 {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		
		String course[]= {"Java","C++","HTML5","��ǻ�ͱ���","�ȵ���̵�"};
		int score[]= {95,88,76,62,55};
		
		while(true) {
			System.out.print("�����̸� >> ");
			String name=scanner.nextLine();
			
			if(name.equals("�׸�"))
				break; //����
			
			
			for(int i=0;i<score.length;i++) {
				if(course[i].equals(name)) {
					System.out.println(course[i]+"�� ������ "+score[i]);
					break;
				}
				if(i==4) {
					System.out.println("���� �����Դϴ�.");
					break;
				}
			}
		}
		scanner.close();
	}

}
