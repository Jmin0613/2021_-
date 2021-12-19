#include <stdio.h>

int main(){
	char s[1000];
	
	scanf("%s", s);
	printf("%s\n",s);
	printf("%d\n",sizeof(s)/sizeof(char));
	
	return 0;
}
