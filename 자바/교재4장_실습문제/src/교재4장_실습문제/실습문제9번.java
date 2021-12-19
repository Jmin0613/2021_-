package ����4��_�ǽ�����;

class ArrayUtil{
	static int[] c;
	
	public static int[] concat(int[] a, int[] b) {
		// �迭 a�� b�� ������ ���ο� �迭 ����
		int c[]=new int[a.length+b.length];
		
		// �迭a ����
		for(int i=0;i<a.length;i++)
			c[i]=a[i];
		// �迭b ����
		for(int i=(a.length+1);i<(a.length+b.length);i++)
			c[i]=b[i-a.length];
		
		return c;
	}
	
	public static void print(int[] c) {
		// �迭 c ���
		System.out.print("[");
		for(int i=0;i<c.length;i++) {
			System.out.print(" "+c[i]+" ");
		}System.out.println("]");
	}
}

public class �ǽ�����9�� {

	public static void main(String[] args) {
		int [] array1 = {1,5,7,9};
		int [] array2 = {3,6,-1,100,77};
		int [] array3 = ArrayUtil.concat(array1, array2);
		ArrayUtil.print(array3);
	}

}
