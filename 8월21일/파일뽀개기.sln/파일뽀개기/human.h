enum { MALE, FEMALE }; //MALE=0. FEMALE=1

struct Human {
	char name[20];
	int age;
	int gender;
};

struct Human Create_Human(char* name, int age, int gender);
int Print_Human(struct Human* human);
