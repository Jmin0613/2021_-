#include <stdio.h>

struct employee{
	int age;
	int salary;
};

struct company{
	struct employee data;
	char name[10];
};

int main(){
	struct compay Kim;
	
	Kim.data.age=31;
	Kim.data.salary=3000000;
	
	printf("Kim's age : %d \n", Kim.data.age);
	printf("Ki's salay : %d%/year \n', Kim.data.salary");
	
	return 0;
}
