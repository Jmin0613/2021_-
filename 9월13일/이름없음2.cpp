#include <stdio.h>

int factorial(int a); //반복  
int rfactorial(int a); //재귀  
int main(){
	int num;
	long fac;
	
	printf("다음 숫자의 팩토리얼을 계산 : ");
	scanf("%d", &num);
	
	fac=factorial(num);
	
	printf("결과 : %d\n", fac);
	return 0;
}

int factorial(int a){
	int i;
	long f=1;
	
	for(i=2;i<=a;i++)
		f*=i;
	return f;
}

int rfactorial(int a){
	if (a==1)
		return 1;
	else
		return rfactorial(a-1)*a;
}
