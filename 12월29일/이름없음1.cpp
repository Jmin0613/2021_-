#include <stdio.h>

typedef struct {
	double real;
	double imag;
}Complex;

void print_complex(Complex c){
	printf("%4.1f + %4.1fi\n",c.real,c.imag);
}

void reset_complex(Complex c){
	c.real=c.imag=0;
}

int main(){
	Complex a={1.0,2.0};
	printf("�ʱ�ȭ ���� : ");
	print_complex(a);
	reset_complex(a);
	printf("�ʱ�ȭ ���� : ");
	print_complex(a);
}

//����ü�� �ּҸ� �ִ°� �ƴ�, �Ű������� �����ؼ� �ٲ����ʴ´� => �ܼ��ϰ� ���簡 �Ͼ �� 
