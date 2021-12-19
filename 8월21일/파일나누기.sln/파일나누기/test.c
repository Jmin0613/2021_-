#include <stdio.h>
#include "str.h"

int main() {
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2)) {
		printf("%s 와 %s는 같은 문장 입니다.\n", str1, str2);
	}
	else {
		printf("%s 와 %s는 다른 문장 입니다.\n", str1, str2);
	}

	return 0;
}