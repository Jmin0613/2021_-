#include <stdio.h>

int main(){
	double height, weight;
	double BMI;
	
	printf("ü��(kg) �Է� : ");
	scanf("%lf", &weight);
	printf("Ű(m) �Է� : ");
	scanf("%lf", &height);
	
	BMI=weight/(height*height); 
	
	printf("BMI: %f \n", BMI);
	return 0;
}
