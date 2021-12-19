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
		printf("연산을 선택하시오: ");
		scanf("%c", &c);
		if(c!='A'||c!='S'||c!='M'||c!='D'||c!='Q'){
			while(1){
				printf("연산을 선택하시오: ");
				scanf("%c", &c);
				getchar();
				
				if(c=='A'||c=='S'||c=='M'||c=='D'||c=='Q')
					break;
			}
		}
		switch(c) {
			case 'A':
				printf("두 수를 공백으로 분히라여 입력하시오: ");
				scanf("%d %d", &num1, &num2);
				printf("연산결과는 %d입니다.\n", num1+num2);
				getchar();
				break;
		
			case 'S':
				printf("두 수를 공백으로 분히라여 입력하시오: ");
				scanf("%d %d", &num1, &num2);
				printf("연산결과는 %d입니다.\n", num1-num2);
				getchar();
				break;
			
			case 'M':
				printf("두 수를 공백으로 분히라여 입력하시오: ");
				scanf("%d %d", &num1, &num2);
				printf("연산결과는 %d입니다.\n", num1*num2);
				getchar();
				break;
			
			case 'D':
				printf("두 수를 공백으로 분히라여 입력하시오: ");
				scanf("%d %d", &num1, &num2);
				printf("연산결과는 %d입니다.\n", num1/num2);
				getchar();
				break;
			
			case 'Q':
				break;
		}
			
	} 
	return 0;
}

