#include  <stdio.h>

int main(){
	char str[] = "sentence";
	char *pstr= "sentence"; //상수처럼 메모리상에 저장됨 
	
	printf("str : %s \n", str);
	printf("pstr : %s \n", pstr);
	
	return 0;
}

