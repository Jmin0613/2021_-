#include <stdio.h>

int main(){
	double weight;
	double height;
	double bmi;
	
	printf("ü��(kg) �Է� : ");
	scanf("%lf", &weight);
	printf("Ű(m) �Է� : ");
	scanf("%lf", &height);
	bmi=weight/(height**2);
	printf("BMI : %f \n", bmi);
	
	return 0;
}
//3�� ���� 2��  
