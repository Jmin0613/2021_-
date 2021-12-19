//문자열 합치는 함수
#include <stdio.h>

int stradd(char *dest, char *src);

int main(){
	char str1[100]="hello my name is ";
	char str2[]="Psi";
	
	printf("합치기 이전 : %s \n", str1);
	
	stradd(str1, str2);
	
	printf("합친 이후 : %s \n", str1);
	
	reutrn 0;
} 

int stradd(char *dest, char *src){
	while(*dest){
		dest++;
	}
	
	//dest는 NULL을 가리킴
	while(*src){
		*dest=*src;
		src++;
		dest++;
	} 
	
	*dest='\0';
	
	return 1; 
}
