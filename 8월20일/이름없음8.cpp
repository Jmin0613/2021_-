#include <stdio.h>
struct TEST{
	int i;
	char c;
};

int main(){
	struct TEST	ST, ST2;
	
	ST.i = 1;
	st.c ='c';
	
	st2=st; // = -> ���� ������  
	
	printf("st2.i : %d \n", st2.i);
	printf("st2.c : %d \n", st2.c);
	
	return 0;
}
