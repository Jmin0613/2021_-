#include <stdio.h>

int main(){
	int i;
	int num;
	
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		if(num%(i+1) == 0)
			printf("%d ",i+1);
	}
	
	return 0;
}
//4�� ���� 2��  
