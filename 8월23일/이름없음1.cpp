#include <stdio.h>
#include <stdlib.h>

int main(ont argc, char **argv){
	int SizeOfArray;
	int *arr;
	
	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeOfArray);
	
	arr=(int *)malloc(sizeof(int)*SizeOfArray);
	// int arr[SizeOfArray]와 동일한 작업을 한 크기의 배열 생성 
	
	free(arr);
	
	return 0; 
}
/*
메모리의 힙 부분은 
사용자가 자유롭게 할당하거나 해제할 수 있다 
따라서 우리의 malloc 함수도 이 힙을 이용 
*/
