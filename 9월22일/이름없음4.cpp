#include <stdio.h>

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
	
	while(1){
		printf("������ �����Ͻÿ�: ");
		scanf("%c", &c);
		if(c!='A'||c!='S'||c!='M'||c!='D'||c!='Q'){
			while(1){
				printf("������ �����Ͻÿ�: ");
				scanf("%c", &c);
				getchar();
				
				if(c=='A'||c=='S'||c=='M'||c=='D'||c=='Q')
					break;
			}
		}
		switch(c) {
			case 'A':
				printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
				scanf("%d %d", &num1, &num2);
				printf("�������� %d�Դϴ�.\n", num1+num2);
				getchar();
				break;
		
			case 'S':
				printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
				scanf("%d %d", &num1, &num2);
				printf("�������� %d�Դϴ�.\n", num1-num2);
				getchar();
				break;
			
			case 'M':
				printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
				scanf("%d %d", &num1, &num2);
				printf("�������� %d�Դϴ�.\n", num1*num2);
				getchar();
				break;
			
			case 'D':
				printf("�� ���� �������� ������ �Է��Ͻÿ�: ");
				scanf("%d %d", &num1, &num2);
				printf("�������� %d�Դϴ�.\n", num1/num2);
				getchar();
				break;
			
			case 'Q':
				break;
		}
			
	} 
	return 0;
}

