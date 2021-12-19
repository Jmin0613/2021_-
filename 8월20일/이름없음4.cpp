#include <stdio.h>

struct test{
	int a,b;
};

int main(){
	struct test st;
	struct test *ptr;
	//struct test형을 가리키는 포인터 ptr 
	
	ptr=&st;
	
	(*ptr).a=1; //ptr->a=1; 
	(*ptr).b=2; //ptr->b=2;
	
	printf("st의 a멤버 : %d \n", st.a);
	printf("st의 b멤버 : %d \n", st.b);
	
	return 0;
}
