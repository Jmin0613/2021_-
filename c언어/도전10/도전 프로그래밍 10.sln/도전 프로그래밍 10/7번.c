#include <stdio.h>
//2**k<=n, k_max=?
int main_7() {
	int n;
	int k = 0, p = 1;
	printf("��� n�Է� : ");
	scanf_s("%d", &n);

	while (p<=n) {
		k++;
		p *= 2;
	}


	printf("������ �����ϴ� k�� �ִ��� %d", k-1);

	return 0;
}