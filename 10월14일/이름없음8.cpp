#include <stdio.h>

int main(){
	int num;
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);
	
	for(int i=1;i<=num;i++){
		if(i%10==3 || i%10==6 || i%10==9)
			printf("* ");
		else
			printf("%d ",i);
	}
	
	return 0;
}
