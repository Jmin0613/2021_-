#include <stdio.h>
#pragma warning(disable: 4996)
int main(void)
{
	char str[30];
	int ch;
	FILE* fp = fopen("Simple.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return - 1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	return 0;
}