#include <stdio.h>
#include <stdlib.h>

int main_2() {
//	int num;
//	int* arr;

//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf_s("%d", &num, sizeof(num));
//	arr = (int*)malloc(sizeof(int) * num); //�迭 ����

	int num = 5;
	int arr[5][5];

	int x = 0;
	int y = -1; //��ǥ 
	int d = 1; //���� ��ȯ 
	int cnt = 1; //ä������ ��
	int max = num; //�迭�� ũ��

	while (max >= 0) {
		for (int i = 0; i < max; i++) { //��(����) ǥ�� 
			y = y + d;
			arr[x][y] = cnt;
			cnt++;
		}
		max--;
		for (int i = 0; i < max; i++) { //��(����) ǥ�� 
			x = x + d;
			arr[x][y] = cnt;
			cnt++;
		}

		d = d * (-1); //����1��+����1�� -> ������ȯ 
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2.d ", arr[i][j]);
		}printf("\n");
	}
	return 0;
}
