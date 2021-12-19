#include <stdio.h>

int main_3() {
	int num1, num2;
	int p, max;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	for (p = 1; p <= num2; p++) {
		if (num1 % p == 0 && num2 % p == 0) {
			max = p;
		}
	}

	printf("두 수의 최대공약수 : %d\n", max);
	return 0;
}

/*
q는 num1이나 num2 보다 클수없음
최대공약수로 num1이나 num2 나누면 나머지가 0이됨
유클리드 호제법
*/