#include <stdio.h>

struct Human{ //Human -> 구조체 이름  
	int age; //나이  
	int height; //키  
	int weight; //몸무게  
};

int main(){
	struct Human Psi; //Human이라는 구조체에 구조체 변수 Psi를 정의  
	
	Psi.age=99;
	Psi.height=185;
	Psi.weight=80;
	
	printf("Psi에 대한 정보 \n");
	printf("나이	: %d \n", Psi.age);
	printf("키		: %d \n", Psi.height);
	printf("몸무게	: %d \n", Psi.weight);
	
	return 0; 
}
/*
struct 구조체 -> 각 원소의 타입이 제각각인 배열  
배열 : 원소 -> 구조체 : 멤버 
*/
