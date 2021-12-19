#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("str1 문자열 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("str2 문자열 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("str3: %s \n", str3);
	return 0;
}