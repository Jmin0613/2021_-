package �����������߰����;

import java.util.StringTokenizer;

public class �߰�2020_8 {

	public static void main(String[] args) {
		StringTokenizer str = new StringTokenizer("ȫ�浿/��ȭ=ȫ��/����=����",
				"/=");
		
		while(str.hasMoreTokens())
			System.out.println(str.nextToken());

	}

}
