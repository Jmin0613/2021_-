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

	printf("���� �̸� �Է�: ");
	gets(name);

	printf("Ž���� �ܾ� �Է�: ");
	gets(word);

	if ((fp = fopen(name, "r")) == NULL)
	{
		fprintf("���� ���� ����! \n", name);
		return -1;
	}

	while (fgets(buffer, sizeof(buffer), fp))
	{
		line++;
		if (strstr(buffer, word))
		{
			printf("%d��: %s��(��) �߰ߵ� \n", line, word);
		}
	}
	
	fclose(fp);
	return 0;

}