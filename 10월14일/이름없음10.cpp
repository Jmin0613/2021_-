#include <stdio.h>

int main(){
	int num;
	printf("�ڿ��� �Է� :");
	scanf("%d", &num);
	
	for(int i=num;0<i;i--){
		for(int j=i;0<j;j--){
			printf("%d ", j);
		}printf("\n");
	}
	return 0;
}
