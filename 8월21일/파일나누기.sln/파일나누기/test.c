#include <stdio.h>
#include "str.h"

int main() {
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2)) {
		printf("%s �� %s�� ���� ���� �Դϴ�.\n", str1, str2);
	}
	else {
		printf("%s �� %s�� �ٸ� ���� �Դϴ�.\n", str1, str2);
	}

	return 0;
}