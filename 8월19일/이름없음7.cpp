#include <stdio.h>

int main(){
	int num;
	char c;
	
	printf("숫자를 입력 : ");
	scanf("%d", &num);
	
	printf("문자를 입력 : ");
	scanf("%s", %c);
	
	return 0;
}
/*
%d 계열은 띄어쓰기를 만날떄까지 입력 받음.
그런데 띄어쓰기 앞 까지만 입력이 되고 버퍼가 비워짐.
뒤에가 %c 계열이면 이제 남아있는 띄어쓰기가 입력됨.
%s는 %d 처럼 공백문자 나올때까지 (처음의 경우)입력을 계속 받음. 
/*
