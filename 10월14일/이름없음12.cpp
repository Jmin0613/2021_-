#include <stdio.h>

int main(){
	int num;
	int p;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);
	
	for(int i=0;i<num;i++){
		p=1;
		for(int j=0;j<=i;j++){
			printf("%d ",p);
			p+=2;
		}printf("\n");
	}
	return 0;
}
