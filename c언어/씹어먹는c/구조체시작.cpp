#include <stdio.h>
#include <stdlib.h>>

struct Human{
	int age;
	int height;
	int weight;
};

int main(){
	struct Human Psi;
	
	Psi.age=99;
	Psi.height=185;
	Psi.weight=80;
	
	printf("Psi�� ���� ���� \n");
	printf("����   : %d \n", Psi.age);
	printf("Ű     : %d \n", Psi.height);
	printf("������ : %d \n", Psi.weight);
	return 0;
}
