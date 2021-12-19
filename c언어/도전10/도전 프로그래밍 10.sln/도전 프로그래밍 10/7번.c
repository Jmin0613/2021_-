#include <stdio.h>
//2**k<=n, k_max=?
int main_7() {
	int n;
	int k = 0, p = 1;
	printf("상수 n입력 : ");
	scanf_s("%d", &n);

	while (p<=n) {
		k++;
		p *= 2;
	}


	printf("공식을 만족하는 k의 최댓값은 %d", k-1);

	return 0;
}