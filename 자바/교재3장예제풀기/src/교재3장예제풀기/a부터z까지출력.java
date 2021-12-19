package 교재3장예제풀기;


public class a부터z까지출력 {

	public static void main(String[] args) {
		char c ='a';
		
		do {
			System.out.print(c);
			c=(char)(c+1);
		}while(c<='z');

	}

}
