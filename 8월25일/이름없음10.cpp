#include <stdio.h>

struct HUMAN{
	int age;
	int height;
	int weight;
	int gender;
};

typedef struct HUMAN Human; // struct HUMAN == Human
//typedef (이름을 새로 부여하고자 하는 타입) (새로 준 타입의 이름)

int Print_Status(Human human); // = struct HUMAN human

int main (){
	Human Adam = {31, 182, 75, 0};
	Human Eve = {27, 166, 48, 1};
	
	Print_Status(Adam);
	Print_Status(Eve);
}

int Print_Status(Human human){
	if (human.gender == 0){
		printf("MALE \n");
	}else {
		printf("FEMALE \n");
	}
	
	printf("Age : %d / height : %d / weight : %d \n",
	human.age, human.height, human.weight);
	
	if (human.gender == 0 && human.height >=100){
		printf("He is tall \n");
	}else if (human.gender == 0 && human.height<180){
		printf("he is small")
	}
	
	printf("------------------------------- \n");
	
	return 0;
}
