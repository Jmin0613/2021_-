#include <stdio.h>
#include <string.h>

int getspace(char* str) //����Ȯ��
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			return i; //����O-->i��ȯ
		else
			return -1; //����X-->-1��ȯ
	}
}
void compname(char* str1, char* str2) //�̸�Ȯ��
{
	int idx1 = getspace(str1); //�̸� ���̷� ���Ͽ��� �Ǵ��ϱ� ����
	int idx2 = getspace(str2);
	int i;
	if (idx1 != idx2)
		printf("�̸� �������� ����! \n");
	else
	{
		i = strncmp(str1, str2, idx1);

		if (i == 0)
			printf("�̸� ����!\n");
		else
			printf("�̸� �������� ����2!\n");
	}
}

void compage(char* str1, char* str2) //����Ȯ��
{
	int idx1 = getspace(str1);
	int idx2 = getspace(str2);
	int age1, age2;
	age1 = atoi(&str1[idx1 + 1]);
	age2 = atoi(&str2[idx2 + 1]);

	if (age1 == age2)
	{
		printf("���� ������!\n");
	}
	else
	{
		printf("���� �������� ����!\n");
	}
}

int main(void)
{
	char str1[20];
	char str2[20];
	
	printf("ù��° ��� �̸� �� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; //�� ���� ������ ���ؼ�
	printf("�ι�° ��� �̸� �� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; //�� ���� ������ ���ؼ�
	
	compname(str1, str2); //�̸�
	compage(str1, str2); //����

	return 0;
}