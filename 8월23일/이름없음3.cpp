/* 포인터 배열을 이용해 2차원 배열 할당  
포인터 배열을 동적으로 할당한 뒤
다시 포인터 배열의 각각 원소들이 가리키는 일차원 배열을
다시 동적으로 할당  
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i;
	int x, y;
	int **arr; //우리는 arr[x][y]를 만들 것 
	
	printf("arr[x][y]를 만들 것임 \n");
	scanf("%d %d", &x, &y);
	
	arr=(int **)malloc(sizeof(int *)*x);
	// int* 형의 원소를 x개 가지는 1차원 배열 생성 
	
	for (i=0;i<x;i++){
		arr[i]=(int *)malloce(sizeof(int)*y);
	} 
	
	printf("생성됨 \n");
	
	for (i=0;i<x;i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
