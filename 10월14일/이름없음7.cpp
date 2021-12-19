#include <stdio.h>

int main(){
	int num;
	printf("자연수 입력 : ");
	scanf("%d", &num);
	
	for(int i=1;i<=12;i++){
		if(num%i == 0)
			printf("%d ", i);
	}
	return 0;
}
