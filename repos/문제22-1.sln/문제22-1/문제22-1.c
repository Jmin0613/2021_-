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
	printf("이름 입력: "); scanf_s("%s", emp.name);
	printf("주민등록번호 입력: "); scanf_s("%s", emp.personalNum);
	printf("급여정보 입력: "); scanf_s("%d", &emp.salary);
	printf("이름: %s\n주민등록번호:%s\n급여:%d\n", emp.name, emp.personalNum, emp.salary);
	return 0;
}