#include <stdio.h>
#include <stdlib.h>

int main(ont argc, char **argv){
	int SizeOfArray;
	int *arr;
	
	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeOfArray);
	
	arr=(int *)malloc(sizeof(int)*SizeOfArray);
	// int arr[SizeOfArray]�� ������ �۾��� �� ũ���� �迭 ���� 
	
	free(arr);
	
	return 0; 
}
/*
�޸��� �� �κ��� 
����ڰ� �����Ӱ� �Ҵ��ϰų� ������ �� �ִ� 
���� �츮�� malloc �Լ��� �� ���� �̿� 
*/
