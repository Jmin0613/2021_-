#include <stdio.h>

int main()
{
	char str[30];
	int sum = 0;
	int i, len;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str); // strlen --> ���ڿ��� ���̸� ��ȯ

	for(i = 0; i < len; i++)
	{
		if (str[i] > '0' && str[i] <= '9') //�ƽ�Ű�ڵ�
		{
			sum += (str[i] - 48); //������ ���ڿ� ������ ������ �ƽ�Ű�ڵ� �� ���̴� 48
		}
	}

	printf("������ �� ��: %d", sum);
	return 0;
}