package 학교4주차3과제;

public class 실습문제13번 {

	public static void main(String[] args) {
		int cnt;
		for(int i=0;i<100;i++) {
			cnt=0;
			if(i%3==0||i%6==0||i%9==0)
				cnt++;
				
			if(i/3==0||i/6==0|i/9==0)
				cnt++;
			
			if(cnt==1)
				System.out.println(i+" 박수 짝");
			if(cnt==2)
				System.out.println(i+" 박수 짝짝");
		}

	}

}
