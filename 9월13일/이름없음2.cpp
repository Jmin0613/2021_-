#include <stdio.h>

int factorial(int a); //�ݺ�  
int rfactorial(int a); //���  
int main(){
	int num;
	long fac;
	
	printf("���� ������ ���丮���� ��� : ");
	scanf("%d", &num);
	
	fac=factorial(num);
	
	printf("��� : %d\n", fac);
	return 0;
}

int factorial(int a){
	int i;
	long f=1;
	
	for(i=2;i<=a;i++)
		f*=i;
	return f;
}

int rfactorial(int a){
	if (a==1)
		return 1;
	else
		return rfactorial(a-1)*a;
}
