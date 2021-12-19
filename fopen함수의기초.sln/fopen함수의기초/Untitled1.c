#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fp = fopen("outdata.txt", "w");

	if (fp == NULL)
	{
		printf("파일 오픈 실패! \n");
		return -1;
	}
	else
		printf("파일 오픈 성공! \n");

	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	return 0;
}