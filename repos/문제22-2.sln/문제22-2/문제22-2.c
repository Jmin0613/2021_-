#include<stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%d�� ° ��� �Է�\n", i+1);
		printf("�̸� �Է�: "); scanf_s("%s", emp[i].name, sizeof(emp[i].name));
		printf("�ֹε�Ϲ�ȣ �Է�: "); scanf_s("%s", emp[i].pid, sizeof(emp[i].pid));
		printf("�޿� �Է�: "); scanf_s("%d", &emp[i].salary);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d�� ° ���\n�̸�: %s\n�ֹε�Ϲ�ȣ: %s\n�޿�:%d\n\n", i + 1, emp[i].name, emp[i].pid, emp[i].salary);
	}
	return 0;
}