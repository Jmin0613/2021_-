#include <stdio.h>

int main(){
	int num;
	char c;
	
	printf("���ڸ� �Է� : ");
	scanf("%d", &num);
	
	fflush(stdin); //stdin�� ���������! 
	
	printf("���ڿ� �Է� : ");
	scanf("%c", %c);
	
	return 0;
}
/*
����� �˾Ƶ���!
ch = getchar(); //stdin ���� 
printf("%c", ch);

��� --> %c�� �� ������� ����. 
*/
