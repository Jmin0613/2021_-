#include <stdio.h>

int main(){
	int a=10;
	int *ptr=&a;
	
	printf("ptr = %d\n",ptr);
	printf("ptr+1 = %d\n",ptr+1);
	printf("ptr+2 = %d\n",ptr+2);
	
	return 0;
}
