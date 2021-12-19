#include <stdio.h>

int main(){

	int num=1;
	int sum=0;	
	printf("while문 사용\n");
	while(num<=100){
		if(num%3==0)
			sum+=num;
		num++;
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n\n", sum);

	sum=0;
	printf("for문 사용\n");
	for(int i=1;i<=100;i++){
		if(i%3==0)
			sum+=i;
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n\n", sum);
	
	num=1;
	sum=0;
	printf("do~while문 사용\n");
	do{
		if(num%3==0)
			sum+=num;
		num++;
	}while(num<=100);
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n\n", sum);
	
	return 0;
}
