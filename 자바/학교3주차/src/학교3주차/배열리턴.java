package �б�3����;

public class �迭���� {
	
	static int[] makeArray() {
		int temp[]=new int[4];
		for(int i=0;i<temp.length;i++)
			temp[i]=i; //�迭���� �ʱ�ȭ
		return temp;//�迭 ����
	}

	public static void main(String[] args) {
		int intArray[];
		intArray = makeArray();
		for(int i=0;i<intArray.length;i++)
			System.out.print(intArray[i]+" "); //�迭 ��� ���� ���
	}

}
