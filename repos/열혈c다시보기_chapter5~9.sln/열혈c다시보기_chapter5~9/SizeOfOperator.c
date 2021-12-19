#include <stdio.h>

int main()
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 inum크기 : %d \n", sizeof(inum));
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

	printf("변수 char의 크기 : %d \n", sizeof(char));
	printf("변수 int의 크기 : %d \n", sizeof(int));
	printf("변수 long의 크기 : %d \n", sizeof(long));
	printf("변수 long long의 크기 : %d \n", sizeof(long long));
	printf("변수 float의 크기 : %d \n", sizeof(float));
	printf("변수 double의 크기 : %d \n", sizeof(double));
	return 0;
}