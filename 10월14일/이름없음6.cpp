#include <stdio.h>

int main(){
	int score;
	printf("점수 입력 : ");
	scanf("%d", &score);
	
	if(90<=score<=100)
		printf("A\n");
	else if (80<=score)
		printf("B\n");
	else if (70<=score)
		printf("C\n");
	else if (60<=score)
		printf("D\n");
	else
		printf("잘못 입력하셨습니다.\n");
		
	return 0;
}
