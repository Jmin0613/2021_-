#include <stdio.h>

void DesSort(int* parr, int len);

int main_5() {
	int arr[7];
	for (int i = 0; i < 7; i++) {
		printf("입력: ");
		scanf_s("%d", &arr[i], sizeof(arr));
	}
	DesSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}

void DesSort(int* parr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) { //내림차순 정렬
		for (int j = 0; j < (len - i); j++) {
			if (parr[j] < parr[j + 1]) {
				temp = parr[j];
				parr[j] = parr[j + 1];
				parr[j + 1] = temp;
			}
		}
	}
}