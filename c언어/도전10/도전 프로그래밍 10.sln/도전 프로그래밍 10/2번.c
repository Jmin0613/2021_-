#include <stdio.h>

int main_2() {
	int a, b;
	int i;

	printf("a�ܺ��� b�ܱ��� �������� ����մϴ�. : ");
	scanf_s("%d %d", &a, &b);
	printf("%d�ܺ��� %d�ܱ��� ����մϴ�.\n", a, b);

	for (; a <= b; a++) {
		for (i = 1; i <= 10; i++) {
			printf("%d x %d = %d\n", a, i, a * b);
		}
		printf("\n");
	}

	return 0;
}