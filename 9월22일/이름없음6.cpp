#include <stdio.h>

int main(){
	int num=0;
	
	while(num!=-1){
		printf("������ ����(����: -1) : ");
		scanf("%d", &num);
		for(int i=0;i<num;i++){
			printf("*");
		}printf("\n");
	}
}
