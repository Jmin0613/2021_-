package 교재4장_실습문제;

class ArrayUtil{
	static int[] c;
	
	public static int[] concat(int[] a, int[] b) {
		// 배열 a와 b를 연결한 새로운 배열 리턴
		int c[]=new int[a.length+b.length];
		
		// 배열a 복사
		for(int i=0;i<a.length;i++)
			c[i]=a[i];
		// 배열b 복사
		for(int i=(a.length+1);i<(a.length+b.length);i++)
			c[i]=b[i-a.length];
		
		return c;
	}
	
	public static void print(int[] c) {
		// 배열 c 출력
		System.out.print("[");
		for(int i=0;i<c.length;i++) {
			System.out.print(" "+c[i]+" ");
		}System.out.println("]");
	}
}

public class 실습문제9번 {

	public static void main(String[] args) {
		int [] array1 = {1,5,7,9};
		int [] array2 = {3,6,-1,100,77};
		int [] array3 = ArrayUtil.concat(array1, array2);
		ArrayUtil.print(array3);
	}

}
