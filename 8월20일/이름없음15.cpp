#include <stdio.h>

int Print_Status(struct HUMAN human);

struct HUMAN{
	int age;
	int height;
	int weight;
	int gender;
} Adam = {31, 182, 75, 0}, Eve = {27, 166, 48, 1};

int main(){
	
	Print_Status(Adam);
	Print_Status(Eve);
}

int Print_Status(struct HUMAN juman){
	if (human.gender == 0){
		printf("MALE \n");
	}else {
		printf("FEMALE \n");
	}
	
	printf("Age : %d / Height : %d / Weight : %d \n",
	human.age, human.height, human.weight);
	
	if (human.gender == 0 && human.height >= 180){
		printf("HE IS WINNER!! \n");
	}else if (human.gender == 0 && human.height <180){
		printf("HE IS A LOSER!! \n");
	}
	printf("-------------------------------------- \n");
	
	return 0;
}
