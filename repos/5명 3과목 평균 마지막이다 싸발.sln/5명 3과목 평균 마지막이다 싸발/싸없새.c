#include <stdio.h>
/*
5���� ������ ���� �Է¹޾Ƽ� �迭�� ���� (ok)
���� 3������ ��ձ��ϰ�, (ok)
�� ��ճ��� ���ؼ� ���� ������� ���. (ok)
�� ��, ����̻��� �հ� �̸��� ���հ� ��� (ok)
*/
void ave_personal(int arr1[][3], int arr2[]);
void ave_compare(int arr[], int* general);
int main() {
	int arr[5][3]; //5���� �� 3���� �Է��� �迭 ���� 
	printf("�� �л����� ���� �Է� ���� \n");

	int i, j;
	for (i = 0; i < 5; i++) { //5���� 3���� ���� �Է� ���� 
		printf("%d��° �л��� ���� �Է�, ����-����-���� ������ �Է��ϼ���\n", i + 1);
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		} printf("\n");
	}
	int ave_score[5]; //�� 5���� ����� �����ϱ� ���� �迭 
	ave_personal(arr, ave_score); //5���� �� 3���� ����� ���ϱ� 

	int ave_general;
	ave_compare(ave_score, &ave_general); //����� ���ؼ� ���� ������� ���+�պҿ��� 
	printf("--------���: %d \n", ave_general);
	return 0;
}
void ave_personal(int arr1[][3], int arr2[]) { //�� 5���� ��� ���ϰ� arr2�� �����ϱ� 
	int i, j, sum = 0;
	for (i = 0; i < 5; i++) { //sum�� 3������ ������ �����ϰ� 3���� ������ arr2�� �����ϱ� 
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum += arr1[i][j];
		}
		sum = sum / 3;
		arr2[i] = sum;
	}
}
void ave_compare(int arr[], int* general) {
	int i, j, temp;
	int sum = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	(*general) = sum / 5; //5�� ���� ���

	for (i = 0; i < 5; i++) {
		printf("%d��°�� ���� ���� ���: %d \n", i + 1, arr[i]);
		if (arr[i] >= (*general)) { //��տ� ���� �պ� ��� 
			printf("----�հ�\n");
		}
		else {
			printf("----���հ� \n");
		}
	}
}