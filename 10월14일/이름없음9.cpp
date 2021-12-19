#include <stdio.h>

int main(){
	int num;
	printf("자연수 입력 : ");
	scanf("%d", &num);
	
	for(int i=0;i<num;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",j+1);
		}printf("\n");
	}
	
	return 0;
}
