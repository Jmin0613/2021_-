#include <stdio.h>

int main(){
	int ten;
	char hexa[10]={};
	
	printf("10진수를 입력하시오 : ");
	scanf("%d", &ten); //10진수로 입력  
	printf("16진수로 변환한 결과 : %x\n", ten);
	return 0;
}
