#include <stdio.h>
#include <string.h>

void return_Palindrome(char* pstr, int idx);

int main_4() {
	char str[10];
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, sizeof(str));

	return_Palindrome(str, strlen(str));
	return 0;
}
void return_Palindrome(char* pstr, int idx) {
	int i = 0;
	int j = idx - 1;

	for (; i < idx / 2; i++) {
		if (pstr[i] != pstr[j]) {
			return printf("���� �ƴմϴ�.\n");
		}
		j--;
	}
	return printf("���Դϴ�.\n");
}