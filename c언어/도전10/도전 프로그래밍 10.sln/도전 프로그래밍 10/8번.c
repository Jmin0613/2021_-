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
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	printf("2�� %d���� %d\n", n, squared(n, 1));

	return 0;
}