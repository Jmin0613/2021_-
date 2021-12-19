#include <stdio.h>

int noMoney(){
	printf("first\n");
	return 1;
	printf("second\n");
	return 2;
}

int main(){
	int ret =noMoney();
	
	printf("%d\n",ret);
}
