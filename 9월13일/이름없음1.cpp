#include <stdio.h>

int Euclid (int a, int b);
int main(){
	int a, b, num;
	printf("�ڿ��� a�� b�� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);
	num=Euclid(a,b);
	printf("a�� b�� �ִ����� : %d \n", num);
	
	return 0;
}

int Euclid (int a , int b){
	if(b==0) return a;
	else return Euclid(b,a%b);
}
