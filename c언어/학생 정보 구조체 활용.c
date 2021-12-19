#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[10];
	double grade; //학점 
};

int main(){
	struct student s;
	
	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", s.name);
	printf("학점을 입력하세요 : ");
	scanf("%lf", &s.grade);
	
	printf("학번:%d \n", s.number);
	printf("이름:%s \n", s.name);
	printf("학점:%.1f \n", s.grade); 
	
	return 0;
}
