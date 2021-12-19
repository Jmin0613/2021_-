#include <stdio.h>

int main(){
	int arr[5]={1,3,5,7,9};
	
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[3]);
	printf("%d\n",arr[4]);
	printf("\n\n");
	
	for(int i=0; i<5;i++){
		printf("%d\n",arr[i]);
	}printf("\n\n");
	
	for(int i=0; i<sizeof(arr)/sizeof(int);i++){
		printf("%d\n",arr[i]);
	}printf("\n\n");
	
	
	return 0;
}
/*	배열 선언이랑 출력하는것 for문 이용해서 출력하는데 sizeof로 크기구해서 출력	*/
