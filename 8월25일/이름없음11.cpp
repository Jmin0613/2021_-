#include <stdio.h>

int main(){
	int input;
	int a,b;
	
	while (1){
		printf("--- ���� ---- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");
		
		scanf("%d", &input);
		
		if (inut == 1){
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d�� �� : %d \n", a,b,a+b);
		}else if (input == 2){
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d�� �� : %d \n", a,b,a-b);
		}else
			break;
	}
	return 0;
}
