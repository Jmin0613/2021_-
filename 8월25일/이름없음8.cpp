#include <stdio.h>
__inline int max(int a, int b){
	if (a>b)
		return a;
	else
		return b;
}

int main(int argc, char **argv){
	printf("3과 2 중 최대값은 : %d", max(3,2));
	return 0;
}
