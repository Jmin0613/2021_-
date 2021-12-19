#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int two[10];
	
	for (i=0;i<10;i++){
		two[i]=pow(2.0,i);
	}
	
	printf("two[]ÀÇ ¿ä¼Ò : \n"); 
	for(i=0;i<10;i++){
		printf("two[%d]=%d \n", i, two[i]); 
	}
	
	return 0;
}
