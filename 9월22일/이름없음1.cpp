#include <stdio.h>

int main(){

	int num=1;
	int sum=0;	
	printf("while�� ���\n");
	while(num<=100){
		if(num%3==0)
			sum+=num;
		num++;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n\n", sum);

	sum=0;
	printf("for�� ���\n");
	for(int i=1;i<=100;i++){
		if(i%3==0)
			sum+=i;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n\n", sum);
	
	num=1;
	sum=0;
	printf("do~while�� ���\n");
	do{
		if(num%3==0)
			sum+=num;
		num++;
	}while(num<=100);
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n\n", sum);
	
	return 0;
}
