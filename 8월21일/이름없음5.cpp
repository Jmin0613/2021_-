#include <stdio.h>
#include "human.h"
#include <str.h>

struct Human Create_Human(char *name, int age, int gender){
	struct Human human;
	
	human.age=age;
	human.gender=gender;
	copy_str(huan.name, name);
	
	return human;
}

int Print_Human(struct Human *human){
	printf("Name : %s \n", human->name); //(*human).name
	printf("Age : %d \n", human->age); //(*human).age
}
