#include <stdio.h>

typedef struct {
	double real;
	double imag;
}Complex;

void add_complex(Complex a, Complex b){
	Complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	printf("a + b = %4.f+%4.1f", result.real, result.imag);
	
}

void main_3() {
	Complex a = { 1.0, 2.0 };
	Complex b = { 3.0, 4.0 };
	
	printf("더하고 난 후 값\n");
	add_complex(a,b);
}
