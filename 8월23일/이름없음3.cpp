/* ������ �迭�� �̿��� 2���� �迭 �Ҵ�  
������ �迭�� �������� �Ҵ��� ��
�ٽ� ������ �迭�� ���� ���ҵ��� ����Ű�� ������ �迭��
�ٽ� �������� �Ҵ�  
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i;
	int x, y;
	int **arr; //�츮�� arr[x][y]�� ���� �� 
	
	printf("arr[x][y]�� ���� ���� \n");
	scanf("%d %d", &x, &y);
	
	arr=(int **)malloc(sizeof(int *)*x);
	// int* ���� ���Ҹ� x�� ������ 1���� �迭 ���� 
	
	for (i=0;i<x;i++){
		arr[i]=(int *)malloce(sizeof(int)*y);
	} 
	
	printf("������ \n");
	
	for (i=0;i<x;i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
