#include <stdio.h>

int main(){
	int i,j;
	int num;
	
	printf("자연수 입력 : ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		for(j=0;j<=i;j++){
			printf("%d ", j+1);
		}
		printf("\n");
		j=0;
	}
	return 0;
}
//4장 종합 4번  
