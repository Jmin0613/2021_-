#include <stdio.h>

char* selction(){
	int selec;
	while(1){
		printf("������ �����Ͻÿ�: ");
		scanf("%c", &selec);
		if(selec=='A'||selec=='S'||selec=='M'||selec=='D'||selec=='Q')
			break;
	} 
	
	return selec;
}

void result(int selec){
	int num1, num2;
	
	switch(selec) {
		case 'A':
			printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &num1, &num2);
			printf("�������� %d�Դϴ�.\n", num1+num2);
			break;
		
		case 'S':
			printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &num1, &num2);
			printf("�������� %d�Դϴ�.\n", num1-num2);
			break;
			
		case 'M':
			printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &num1, &num2);
			printf("�������� %d�Դϴ�.\n", num1*num2);
			break;
			
		case 'D':
			printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &num1, &num2);
			printf("�������� %d�Դϴ�.\n", num1/num2);
			break;
			
		case 'Q':
			break;
	}
}

int main(){
	char c;
	int num1,num2;
	
	printf("******************** \n");
	printf("A ---- Add \n");
	printf("S ---- Subtract \n");
	printf("M ---- Multiply \n");
	printf("D ---- Divide \n");
	printf("Q ---- Quit");
	printf("******************** \n");
	
	c=selection();
	result(c);
	
	return 0;
	
}
