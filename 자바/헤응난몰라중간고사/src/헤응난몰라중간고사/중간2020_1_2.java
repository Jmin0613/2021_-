package �����������߰����;

import java.util.*;

public class �߰�2020_1_2 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int c[][];
		c=new int[3][];
		c[0]=new int[3];
		c[1]=new int[2];
		c[2]=new int[4];
		
		for(int i=0;i<c.length;i++) {
			for(int j=0;j<c[i].length;j++) {
				System.out.print("c["+i+"]["+j+"] �Է� : ");
				c[i][j]=scanner.nextInt();
			}
		}System.out.println();
		
		for(int i=0;i<c.length;i++) {
			for(int j=0;j<c[i].length;j++)
				System.out.print(c[i][j]+" ");
			System.out.println();
		}
		
		scanner.close();
	}

}
