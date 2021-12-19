#include <stdio.h>

int main(){
	int a,b;
	int i;
	
	printf("a단부터 b단까지 구구단을 출력합니다. : ");
	scanf("%d %d", &a, &b);
	printf("%d단부터 %d단까지 출력합니다.\n", a,b);
	
	for(;a<=b;a++){
		for(i=1;i<=10;i++){
			printf("%d x %d = %d\n", a,i,a*b);
		}
		printf("\n");
	}
	
	return 0;
}
