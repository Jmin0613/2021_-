#include <stdio.h>

int Euclid (int a, int b);
int main(){
	int a, b, num;
	printf("자연수 a와 b를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	num=Euclid(a,b);
	printf("a와 b의 최대공약수 : %d \n", num);
	
	return 0;
}

int Euclid (int a , int b){
	if(b==0) return a;
	else return Euclid(b,a%b);
}
