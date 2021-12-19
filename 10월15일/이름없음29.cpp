#include <stdio.h>

void printNoSpace(char *str){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' ')
			printf("%c",str[i]);
	}
}

int main(){
	printNoSpace("Hello, World!\n");
	printNoSpace("My name is Doodle\n");
	
	return 0;
}
