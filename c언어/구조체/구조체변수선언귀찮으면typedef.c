#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
//����ü ���� �����ϱ� �����Ƽ� ���� �� : typedef(��Ī�� ����� ���)
 
typedef struct _Persin{ //����ü �̸��� _Person
	char name[20];
	int age;
	char address[100];
}Person; //typedef�� ����Ͽ� ����ü ��Ī�� Person���� ����

int main(){
	Person p1; //����ü ��Ī Person���� ���� ����
	
	strcpy(p1.name, "ȫ�浿");
	p1.age=30;
	strcpy(p1.address, "����� ��걸 �ѳ���");
	
	printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
    printf("����: %d\n", p1.age);        // ����: 30
    printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸 �ѳ���

    return 0;
}
