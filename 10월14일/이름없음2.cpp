#include <stdio.h>

int main(){
	double height, weight;
	double BMI;
	
	printf("체중(kg) 입력 : ");
	scanf("%lf", &weight);
	printf("키(m) 입력 : ");
	scanf("%lf", &height);
	
	BMI=weight/(height*height); 
	
	printf("BMI: %f \n", BMI);
	return 0;
}
