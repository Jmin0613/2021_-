#include <stdio.h>

typedef struct {
	double real;
	double imag;
}Complex;

void add_complex(Complex a, Complex b) {
	Complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	printf("a+b = %.1f + %.1fi", result.real, result.imag);

}

void main() {
	Complex a = { 1.0, 2.0 };
	Complex b = { 3.0, 4.0 };

	printf("���ϰ� �� �� ��\n");
	add_complex(a, b);
}