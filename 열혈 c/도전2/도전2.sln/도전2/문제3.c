#include <stdio.h>

int main_3() {
	int num;
	int odd = 0, even = 9;
	int arr[10];
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�; ");
		scanf_s("%d", &num, sizeof(num));
		
		if (num % 2 != 0){ //Ȧ��
			arr[odd] = num;
			odd += 1;
		}
		else { //¦��
			arr[even] = num;
			even -= 1;
		}
	}

	printf("�迭 ����� ���: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}