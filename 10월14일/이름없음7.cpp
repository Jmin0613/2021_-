#include <stdio.h>

int main(){
	int num;
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);
	
	for(int i=1;i<=12;i++){
		if(num%i == 0)
			printf("%d ", i);
	}
	return 0;
}
