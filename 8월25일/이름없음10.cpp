#include <stdio.h>

struct HUMAN{
	int age;
	int height;
	int weight;
	int gender;
};

typedef struct HUMAN Human; // struct HUMAN == Human
//typedef (�̸��� ���� �ο��ϰ��� �ϴ� Ÿ��) (���� �� Ÿ���� �̸�)

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
