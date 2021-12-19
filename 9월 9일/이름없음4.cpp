#include <stdio.h>

int main(){
	int num;
	printf("점수 입력 : ");
	scanf("%d", &num);
	
	if (90<=num)
		printf("A");
	else if (80<=num)
		printf("B");
	else if (70<=num)
		printf("C");
	else if (60<=num)
		printf("D");
	else
		printf("F");
		
	return 0;
} 
//4장 종합 1번  
