#include <stdio.h>
#include <string.h>

int getspace(char* str)
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1;
}
void compname(char* str1, char* str2)
{
	int idx1 = getspace(str1);
	int idx2 = getspace(str2);
	int i;

	if (idx1 != idx2)
		printf("�̸� �������� ����!\n");
	else
	{
		i = strncmp(str1, str2, idx1);
		if (i == 0)
			printf("�̸� ����!\n");
		else
			printf("�̸� �������� ����2!\n");
	}
}
void compage(char* str1, char* str2)
{
	int idx1 = getspace(str1);
	int idx2 = getspace(str2);
	int age1; 
	int age2;

	age1 = atoi(&str1[idx1 + 1]);
	age2 = atoi(&str2[idx2 + 1]);

	if (age1 == age2)
		printf("���� ����!\n");
	else
		printf("���� �������� ����!\n");
}
int main()
{
	char str1[20];
	char str2[20];
	printf("ù��° ��� �̸� �� ����: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; //���Ե� \n�� ���ֱ�

	printf("�ι�° ��� �̸� �� ����: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	compname(str1, str2);
	compage(str1, str2);
	return 0;
}