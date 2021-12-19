#include <stdio.h>

int main(){
	int num;
	int arr[100];
	
	printf("숫자 개수 입력 : ");
	scanf("%d",&num);
	
	printf("숫자 입력 : ");
	for(int i=0;i<num;i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<num;i++){
		if(i%2!=0)
		printf("%d ", arr[i]);
	}printf("\n");
	for(int i=0;i<num;i++){
		if(i%2==0)
		printf("%d ",arr[i]);
	}
	return 0;

} 
