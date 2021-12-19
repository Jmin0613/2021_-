#include <stdio.h>

int main(){
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;
	
	char not_null = '0';
	
	printf("NULL의 정수(아스키) 값 : %d, %d, %d \n",
	null_1, null_2, null_3);
	printf("'0'의 정수(아스키) 값 :%d \n", not_null);
	
	return 0; 
}
/*
printf 함수로 char 변수나 문자를 출력할 때는
서식 지정자로 %c를 사용합니다.
만약 서식 지정자로 %d를 사용하여 출력하면
char 변수에 저장된 정숫값(ASCII 코드값)이 그대로 출력됩니다.
*/
