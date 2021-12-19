#include <stdio.h>
#include <stdlib.h>

int main_2() {
//	int num;
//	int* arr;

//	printf("숫자를 입력하시오 : ");
//	scanf_s("%d", &num, sizeof(num));
//	arr = (int*)malloc(sizeof(int) * num); //배열 생성

	int num = 5;
	int arr[5][5];

	int x = 0;
	int y = -1; //좌표 
	int d = 1; //방향 전환 
	int cnt = 1; //채워넣을 값
	int max = num; //배열의 크기

	while (max >= 0) {
		for (int i = 0; i < max; i++) { //행(가로) 표현 
			y = y + d;
			arr[x][y] = cnt;
			cnt++;
		}
		max--;
		for (int i = 0; i < max; i++) { //열(세로) 표현 
			x = x + d;
			arr[x][y] = cnt;
			cnt++;
		}

		d = d * (-1); //가로1번+세로1번 -> 방향전환 
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2.d ", arr[i][j]);
		}printf("\n");
	}
	return 0;
}
