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
		printf("%d번 째 사람 입력\n", i+1);
		printf("이름 입력: "); scanf_s("%s", emp[i].name, sizeof(emp[i].name));
		printf("주민등록번호 입력: "); scanf_s("%s", emp[i].pid, sizeof(emp[i].pid));
		printf("급여 입력: "); scanf_s("%d", &emp[i].salary);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d번 째 사람\n이름: %s\n주민등록번호: %s\n급여:%d\n\n", i + 1, emp[i].name, emp[i].pid, emp[i].salary);
	}
	return 0;
}