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

	printf("���� �̸� �Է�: ");
	scanf("%s", fname);

	printf("Ž���� �ܾ� �Է�: ");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� ����. \n", fname);
		return -1;
	}

	while(fgets(buffer, sizeof(buffer), fp))
	{
		line++;;
		if (strstr(buffer, word))
		{
			printf("���� %d: �ܾ� %s��(��) �߰ߵ� \n", line, word);
		}
	}
	fclose(fp);
	return 0;
}