#include <stdio.h>

int main(){
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);
	
	int i, j;
	for(i=0;i<num;i++){
		j=i%10;
		if(j==3 || j==6 || j=9)
			printf("* ");
		else
			printf("%d ", i+1);
	}
	return 0;
}
//4�� ���� 3��  
