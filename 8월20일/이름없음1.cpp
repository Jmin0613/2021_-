#include <stdio.h>

struct Human{ //Human -> ����ü �̸�  
	int age; //����  
	int height; //Ű  
	int weight; //������  
};

int main(){
	struct Human Psi; //Human�̶�� ����ü�� ����ü ���� Psi�� ����  
	
	Psi.age=99;
	Psi.height=185;
	Psi.weight=80;
	
	printf("Psi�� ���� ���� \n");
	printf("����	: %d \n", Psi.age);
	printf("Ű		: %d \n", Psi.height);
	printf("������	: %d \n", Psi.weight);
	
	return 0; 
}
/*
struct ����ü -> �� ������ Ÿ���� �������� �迭  
�迭 : ���� -> ����ü : ��� 
*/
