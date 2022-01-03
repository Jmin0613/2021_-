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
	printf("초기화 이전 : ");
	print_complex(a);
	reset_complex(a);
	printf("초기화 이후 : ");
	print_complex(a);
}

//구조체의 주소를 주는게 아닌, 매개변수로 전달해서 바뀌지않는다 => 단순하게 복사가 일어난 것 
