#include <stdio.h>

int main(){
	int num;
	char c;
	
	printf("숫자를 입력 : ");
	scanf("%d", &num);
	
	fflush(stdin); //stdin을 비워버려라! 
	
	printf("문자열 입력 : ");
	scanf("%c", %c);
	
	return 0;
}
/*
덩어리로 알아두자!
ch = getchar(); //stdin 비우기 
printf("%c", ch);

결론 --> %c는 잘 사용하지 말자. 
*/
