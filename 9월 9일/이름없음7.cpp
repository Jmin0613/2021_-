#include <stdio.h>

int main(){
	int i,j;
	int num;
	
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		for(j=0;j<=i;j++){
			printf("%d ", j+1);
		}
		printf("\n");
		j=0;
	}
	return 0;
}
//4�� ���� 4��  
