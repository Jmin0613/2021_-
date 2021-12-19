#include <stdio.h>

void arr_rotate90(int arr[][4]);

int main_1() {
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	printf("변경 전 배열 출력\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2.d ", arr[i][j]);
		}printf("\n");
	}printf("\n");

	arr_rotate90(arr);
	printf("변경 후 배열 출력\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 00; j < 4; j++) {
			printf("%2.d ", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

void arr_rotate90(int arr[][4]) {
	int temp[4][4];
	// 전(i,j)  →   후(j,3-i)
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			temp[j][3-i] = arr[i][j]; //arr가 변경 전, temp가 변경 후
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = temp[i][j]; //다시 초기화해줌
		}
	}
}