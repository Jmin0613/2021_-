#include <stdio.h>

int squared(int n, int r) {
	if (n == 0) {
		return r;
	}
	r *= 2;
	squared(n - 1, r);
}

int main_8() {
	int n, result;
	printf("정수 입력 : ");
	scanf_s("%d", &n);

	printf("2의 %d승은 %d\n", n, squared(n, 1));

	return 0;
}