#include <stdio.h>

char compare(char *str1, char str2);

int main(){
	char str1[20];
	char str2[20];
	
	scanf("%s", str1);
	scanf("%s", str2);
	
	if(compare(str1, str2)){
		printf("%s 와 %s는 같은 문장 입니다.\n", str1, str2);
	}else {
		printf("%s 와 %s는 다른 문장 입니다.\n", str1, str2);
	}
	
	return 0;
}

char compare(char *str1, char *str2){
	while(*str1){
		if(*str1 != *str2){
			return 0;
		}
		
		str1++;
		str2++:
	}
	
	if (*str2 == '\0') return 1;
	
	return 0;
}
