#include <stdio.h>

struct TEST{
	int age;
	int gender;
	char name[20];
};

int set_human(struct TEST *a, int age, int gender, const char *name);
int copy_str(char *dest, const char *src);

int main(){
	struct TEST human;
	set_human(&human,10,1,"Lee");
	printf("AGE : %d // Gender : %d ", human.age, human.gender);

	return 0;
}

int set_human(struct TEST *a, int age, int gender, const char *name){
	(*a).age=age; // a->age=age;
	(*a).gender=gender; // a->gender=gender;
	copy_str((*a).name, name); //a->name
	
	return 0;
}

int copy_str(char *dest, const char *src){
	while (*src){
		*dest = *src;
		src++
		dest++;
	}
	
	*dest='\0';
	
	return 1;
}
