#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100 //���� ��� ������ ���� �迭�� ũ�� 
typedef struct Student{ //���ÿ� ������ ����� �ڷ��� 
	int id; //�й� 
	char name[32]; //�̸� 
	char dept[32]; //�Ҽ� �а� 
}Student; //���� ����� �ڷ��� ����  
typedef Student Element; //���� ���� ����� �迭 

Element data[MAX_STACK_SIZE]; //���� ���� ����� �迭 
int top; //���� ������ top

//���� ��Ȳ ó���� ���� �Լ�. �޼��� ��� �� ���α׷� ����.
void error(const char str[]) {
	printf("%s\n", str);
	exit(1);
}

//������ �ֿ� ���� : ���� 
void init_stack() { top = -1; }
int is_empty() { return top == -1; }
int is_full() { return top == MAX_STACK_SIZE - 1; }
int size() { return top + 1; }

void push(Element e) {
	if (is_full())
		error("���� ��ȭ ����");
	data[++top] = e;
}

Element pop() {
	if (is_empty())
		error("���� ���� ����");
	return data[top--];
}

Element peek() {
	if (is_empty())
		error("���� ���� ����");
	return data[top];
}

//���� �׽�Ʈ�� ���� �ڵ� : ��� �������� ����
void print_stack(const char msg[]) {
	int i;
	printf("%s[%2d] = ", msg, size());

	for (i = 0; i < size(); i++)
		printf("\n\t%-15d %-10s %-20s", data[i].id, data[i].name, data[i].dept);
	printf("\n");
}

Student get_student(int id, char name[], char dept[]){
	Student s;
	s.id=id;
	strcpy(s.name, name); //���ڿ� ����. s.name=name�� ���� 
	strcpy(s.dept, dept); //���ڿ� ����. s.dept=dept�� ���� 
	return s;
}

int main() {
	init_stack();
	push(get_student(2018130007,"ȫ�浿", "��ǻ�Ͱ��а�"));
	push(get_student(2018130100,"�̼���", "�����а�"));
	push(get_student(2018130135,"�迬��", "ü����"));
	push(get_student(2018130135,"Ȳ��", "���а�"));
	print_stack("ģ�� 4�� ���� ��");
	pop(); 
	print_stack("ģ�� 1�� ���� ��");
}
