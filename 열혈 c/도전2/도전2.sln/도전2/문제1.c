#include <stdio.h>

void return_odd(int* parr, int len);
void return_even(int* parr, int len);

int main_1() {
	int arr[10];
	printf("�� 10���� ���� �Է�: \n");
	for (int i = 0; i < 10; i++) {
		printf("�Է� : ");
		scanf_s("%d", &arr[i], sizeof(arr));
	}

	return_odd(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	return_even(arr, sizeof(arr) / sizeof(int));

	return 0;
}

void return_odd(int* parr, int len) {
	printf("Ȧ�� ��� : ");
	for (int i = 0; i < len; i++) {
		if (parr[i] % 2 != 0)
			printf("%d ", parr[i]);
	}
}

void return_even(int* parr, int len) {
	printf("¦�� ��� : ");
	for (int i = 0; i < len; i++) {
		if (parr[i] % 2 == 0)
			printf("%d ", parr[i]);
	}
}