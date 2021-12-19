#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)
int main(void)
{
	FILE* fp = NULL;
	char name[100];
	char word[100];
	char buffer[100];
	int line = 0;

	printf("파일 이름 입력: ");
	gets(name);

	printf("탐색할 단어 입력: ");
	gets(word);

	if ((fp = fopen(name, "r")) == NULL)
	{
		fprintf("파일 열기 실패! \n", name);
		return -1;
	}

	while (fgets(buffer, sizeof(buffer), fp))
	{
		line++;
		if (strstr(buffer, word))
		{
			printf("%d줄: %s이(가) 발견됨 \n", line, word);
		}
	}
	
	fclose(fp);
	return 0;

}