#include <stdio.h>

int main(){
	char str[50]="I like C programing";
	printf("string : %s \n", str);
	
	str[8]='\0';
	printf("string : %s \n", str);
	
	str[6]='\0';
	printf("string : %s \n", str);
	
	str[1]='\0';
	printf("string : %s \n", str);
	
	int i=0;
	while(1){
		printf("str[%d] : %c \n", i, str[i]);
		i++;
		if (i==20){
		break;
		}
	}
	return 0;
}
