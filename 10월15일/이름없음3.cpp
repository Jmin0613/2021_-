#include <stdio.h>

int main(){
	int a=10;
	
	printf("&a = %d \n", &a);
	printf("(&a) + 1 = %d \n", (&a)+1);
	printf("(&a) + 2 = %d \n", (&a)+2);
	//	a의 주소값 + 1
	//	a의 주소값 +2 
	return 0; 
}
