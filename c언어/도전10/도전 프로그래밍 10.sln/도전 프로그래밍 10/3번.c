#include <stdio.h>

int main_3() {
	int num1, num2;
	int p, max;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	for (p = 1; p <= num2; p++) {
		if (num1 % p == 0 && num2 % p == 0) {
			max = p;
		}
	}

	printf("�� ���� �ִ����� : %d\n", max);
	return 0;
}

/*
q�� num1�̳� num2 ���� Ŭ������
�ִ������� num1�̳� num2 ������ �������� 0�̵�
��Ŭ���� ȣ����
*/