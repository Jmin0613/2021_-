#include <stdio.h>

struct TEST{
	int c;
};

int main(){
	struct TEST tl
	struct TEST *pt=&t;
	
	(*pt).c = 0;
	printf("t.c : %d \n", t.c);
	
	pt->c=1;
	printf("t.c : %d\n", t.c);
	
	return 0;
}
