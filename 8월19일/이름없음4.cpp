#include <stdio.h>

int main(){
	char word[30]={"long sentence"};
	char *str=word; //포인터, 주소값을 참조한 값에 저장 
	
	printf("%s \n", str);
	
	return 0;
}
