#include <stdio.h>

int main(){
	int a,b,sum=0;
	int arr[10][10];
	
	printf("10x10 ������ 2���� �迭�� �Է¹��� ��...\n");
	printf("��� �� �Է� : ");
	scanf("%d %d",&a,&b);
	
	printf("\n�� �迭�� ���� �Է�...\n");
	for(int i=0;i<a;i++){
		printf("%d��° ���� �� �Է� : ",i+1);
		for(int j=0;j<b;j++)
			scanf("%d",&arr[i][j]); 
	}
	
	printf("\n�� �� ����� �� ���...\n");
	for(int i=0;i<a;i++){
		sum=0;
		for(int j=0;j<b;j++)
			sum+=arr[i][j];
		printf("%d��° �� ����� �� : %d\n",i+1,sum);
	}
	
	return 0;
}
