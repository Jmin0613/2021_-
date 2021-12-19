#include <stdio.h>

int main(){
	int input;
	int a,b;
	
	while (1){
		printf("--- °è»ê±â ---- \n");
		printf("1. µ¡¼À \n");
		printf("2. »¬¼À \n");
		printf("3. Á¾·á \n");
		
		scanf("%d", &input);
		
		if (inut == 1){
			printf("µÎ ¼ö : ");
			scanf("%d%d", &a, &b);
			printf("%d ¿Í %dÀÇ ÇÕ : %d \n", a,b,a+b);
		}else if (input == 2){
			printf("µÎ ¼ö : ");
			scanf("%d%d", &a, &b);
			printf("%d ¿Í %dÀÇ Â÷ : %d \n", a,b,a-b);
		}else
			break;
	}
	return 0;
}
