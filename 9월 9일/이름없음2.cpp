#include <stdio.h>

int main(){
	double weight;
	double height;
	double bmi;
	
	printf("체중(kg) 입력 : ");
	scanf("%lf", &weight);
	printf("키(m) 입력 : ");
	scanf("%lf", &height);
	bmi=weight/(height**2);
	printf("BMI : %f \n", bmi);
	
	return 0;
}
//3장 종합 2번  
