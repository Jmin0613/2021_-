#include <stdio.h>

struct employee
{
	char name[20];
	char personalNum[20];
	int salary;
};

int main(void)
{
	struct employee emp;
	printf("�̸� �Է�: "); scanf_s("%s", emp.name);
	printf("�ֹε�Ϲ�ȣ �Է�: "); scanf_s("%s", emp.personalNum);
	printf("�޿����� �Է�: "); scanf_s("%d", &emp.salary);
	printf("�̸�: %s\n�ֹε�Ϲ�ȣ:%s\n�޿�:%d\n", emp.name, emp.personalNum, emp.salary);
	return 0;
}