//구조체는 정의만 해서는 사용할 수 없음
//구조체도 변수로 선언해서 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
 
struct Person{
	char name[20];
	int age;
	char address[100];
};

int main(){
	struct Person p1; //구조체 변수 선언
	
	//점으로 구조체 멤버에 접근하여 값 할당
	strcpy(p1.name , "홍길동");
	p1.age=30;
	strcpy(p1.address, "서울시 용산구 한남동");

	//점으로 구조체 멤버에 접근하여 값 출력
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("주소 : %s\n", p1.address);
	
	return 0; 
}
