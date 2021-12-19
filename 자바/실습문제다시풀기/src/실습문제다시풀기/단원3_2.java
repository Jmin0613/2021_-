package 실습문제다시풀기;

public class 단원3_2 {

	public static void main(String[] args) {
		int n[][]= {{1},{1,2,3},{1},{1,2,3,4},{1,2}};
		
		for(int i=0;i<n.length;i++) {
			for(int j=0;j<n[i].length;j++)
				System.out.println(n[i][j]+" ");
			System.out.println();
		}
	}

}
