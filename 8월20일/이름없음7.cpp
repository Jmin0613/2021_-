#include <stdio.h>

int add_ione(int *a);

struct TEST{
	int c;
};

int main(){
	struct TEST t;
	struct TEST *pt=&t;
	
	pt->c=0;
	
	//add_one 함수에 인자에 t 구조체 변수의 멤버 c의 주소값을 전달   
	add_one(&t.c);	
	printf("t.c : %d \n", t.c);
	
	//add_one 함수의 인자에 pt가 가리키는 구조체 변수의 멤버 c의 주소값을 전달
	add_one(&pt_.c);
	printf("t.c : %d \n", t.c);
	
	return 0;
}

int add_one(int *a){
	*a+=1;
	return 0;
}
