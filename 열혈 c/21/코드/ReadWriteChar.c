#include <stdio.h>

int main(){
	int ch1, ch2;
	
	ch1=getchar(); //단순 문자 입력
	ch2=fgetc(stdin); //입력받을 스트림 지정가능, 엔터 키 입력 
	
	putchar(ch1); //단순 문자 출력
	fputc(ch2, stdout); //엔터 키 출력
	return 0; 
}
