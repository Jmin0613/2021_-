#include <stdio.h>

void return_odd(int* parr, int len);
void return_even(int* parr, int len);

int main_1() {
	int arr[10];
	printf("총 10개의 숫자 입력: \n");
	for (int i = 0; i < 10; i++) {
		printf("입력 : ");
		scanf_s("%d", &arr[i], sizeof(arr));
	}

	return_odd(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	return_even(arr, sizeof(arr) / sizeof(int));

	return 0;
}

void return_odd(int* parr, int len) {
	printf("홀수 출력 : ");
	for (int i = 0; i < len; i++) {
		if (parr[i] % 2 != 0)
			printf("%d ", parr[i]);
	}
}

void return_even(int* parr, int len) {
	printf("짝수 출력 : ");
	for (int i = 0; i < len; i++) {
		if (parr[i] % 2 == 0)
			printf("%d ", parr[i]);
	}
}