#include <stdio.h>

void LoopFibo(int n);
int RecurFibo(int n);

int main(){
	int i, num;
	printf("계산할 피보나치 수열의 항 입력 : ");
	scanf("%d", &num);
	
	printf("\n반복문 이용\n");
	LoopFibo(num);
	
	printf("\n재귀문 이용\n");
	for(i=0;i<num;i++){
		printf("%d ", RecurFibo(i));
	}
	
	return 0;
}

void LoopFibo(int n){
	int cnt=0;
	int p=0, q=1, tmp=0;
	while(cnt != n){
		printf("%d ", tmp);
		tmp=q;
		q+=p;
		p=tmp;
		cnt++;
	}
}

int RecurFibo(int n){
	if (n==0 || n==1)
		return n;
	else
		return (RecurFibo(n-1)+RecurFibo(n-2));
}
