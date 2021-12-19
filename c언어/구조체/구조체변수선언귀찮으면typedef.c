#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
//구조체 변수 선언하기 귀찮아서 쓰는 것 : typedef(별칭을 만드는 기능)
 
typedef struct _Persin{ //구조체 이름은 _Person
	char name[20];
	int age;
	char address[100];
}Person; //typedef를 사용하여 구조체 별칭을 Person으로 정의

int main(){
	Person p1; //구조체 별칭 Person으로 변수 선언
	
	strcpy(p1.name, "홍길동");
	p1.age=30;
	strcpy(p1.address, "서울시 용산구 한남동");
	
	printf("이름: %s\n", p1.name);       // 이름: 홍길동
    printf("나이: %d\n", p1.age);        // 나이: 30
    printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    return 0;
}
