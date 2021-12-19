#include <stdio.h>

char* selction(){
	int selec;
	while(1){
		printf("연산을 선택하시오: ");
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
			printf("두 수를 공백으로 분히라여 입력하시오: ");
			scanf("%d %d", &num1, &num2);
			printf("연산결과는 %d입니다.\n", num1+num2);
			break;
		
		case 'S':
			printf("두 수를 공백으로 분히라여 입력하시오: ");
			scanf("%d %d", &num1, &num2);
			printf("연산결과는 %d입니다.\n", num1-num2);
			break;
			
		case 'M':
			printf("두 수를 공백으로 분히라여 입력하시오: ");
			scanf("%d %d", &num1, &num2);
			printf("연산결과는 %d입니다.\n", num1*num2);
			break;
			
		case 'D':
			printf("두 수를 공백으로 분히라여 입력하시오: ");
			scanf("%d %d", &num1, &num2);
			printf("연산결과는 %d입니다.\n", num1/num2);
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
