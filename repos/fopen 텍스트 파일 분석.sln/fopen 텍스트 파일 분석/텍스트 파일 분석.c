#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main(void)
{
	FILE* fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("파일 이름 입력: ");
	scanf("%s", fname);

	printf("탐색할 단어 입력: ");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없음. \n", fname);
		return -1;
	}

	while(fgets(buffer, sizeof(buffer), fp))
	{
		line++;;
		if (strstr(buffer, word))
		{
			printf("라인 %d: 단어 %s이(가) 발견됨 \n", line, word);
		}
	}
	fclose(fp);
	return 0;
}