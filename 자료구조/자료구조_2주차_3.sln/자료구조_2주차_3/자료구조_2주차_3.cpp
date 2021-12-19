#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}
int main() {
	int a, b, t;
	a = 10;
	b = 20;
	swap(&a, &b);
	cout << a << "   " << b << endl;
}