#include <stdio.h>

int main(){
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
	
	for(int i=num;0<i;i--){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}printf("\n");
	} 
	return 0;
}
