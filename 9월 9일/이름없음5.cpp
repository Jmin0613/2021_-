#include <stdio.h>

int main(){
	int i;
	int num;
	
	printf("자연수 입력 : ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		if(num%(i+1) == 0)
			printf("%d ",i+1);
	}
	
	return 0;
}
//4장 종합 2번  
