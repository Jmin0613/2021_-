#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int c;

	fp = fopen("input.txt", "r");

	if (fp == NULL)
	{
		printf("���� ���� ����! \n");
		return-1;
	}
	else
		printf("���� ���� ����! \n");

	while ((c = fgetc(fp)) != EOF)
		putchar(c);

	fclose(fp);
	return 0;
}