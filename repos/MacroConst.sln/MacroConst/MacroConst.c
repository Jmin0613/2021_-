#include <stdio.h>
#define NAME "홍길동"
#define AGE	24
#define PRINT_ADDR	puts("주소: 대전광역시\n");

int main() {
	printf("이름: %s \n", NAME);
	printf("나이: %s \n", AGE);
	PRINT_ADDR;
	return 0;
}