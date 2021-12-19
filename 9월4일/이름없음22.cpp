#include <stdio.h>

int main(){
	double a,b;
	
	printf("두 실수 입력 : ");
	scanf("%lf %lf", &a, &b);
	
	printf("%.2f + %.2f = %.2f \n", a,b,a+b);
	return 0;
}
