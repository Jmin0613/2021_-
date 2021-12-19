package 학교3주차;

public class 배열리턴 {
	
	static int[] makeArray() {
		int temp[]=new int[4];
		for(int i=0;i<temp.length;i++)
			temp[i]=i; //배열원소 초기화
		return temp;//배열 리턴
	}

	public static void main(String[] args) {
		int intArray[];
		intArray = makeArray();
		for(int i=0;i<intArray.length;i++)
			System.out.print(intArray[i]+" "); //배열 모든 원소 출력
	}

}
