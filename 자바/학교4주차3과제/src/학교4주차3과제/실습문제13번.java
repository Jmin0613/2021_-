package �б�4����3����;

public class �ǽ�����13�� {

	public static void main(String[] args) {
		int cnt;
		for(int i=0;i<100;i++) {
			cnt=0;
			if(i%3==0||i%6==0||i%9==0)
				cnt++;
				
			if(i/3==0||i/6==0|i/9==0)
				cnt++;
			
			if(cnt==1)
				System.out.println(i+" �ڼ� ¦");
			if(cnt==2)
				System.out.println(i+" �ڼ� ¦¦");
		}

	}

}
