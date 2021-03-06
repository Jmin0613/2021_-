#include <iostream>
using namespace std;

typedef struct Animal{
	char name[30];
	int age;
	
	int health;
	int food;
	int clean;
} Animal;

void create_animal(Animal *animal){
	cout <<"동물 이름 : "
	cin >> animal -> name;
	
	cout <<"동물 나이 : "
	cin >> animal -> age;
	
	animal -> health =100;
	animal -> food =100;
	animal -> clean =100;
}

void play(Animal*animal){
	animal -> healt +=10;
	animal -> food -=20;
	animal -> clean -=30;
}

void one_day_pass(Animal *animal){
	animal -> health -= 10;
	animal -> food -=30;
	animal ->clean -=20;
}

void show_stat(Animal *animal){
	cout <<animal -> name <<"의 상태"<<endl;
	cout <<"체력 : " <<animal -> health <<endl;
	cout <<"배부름 : "<<animal -> food << endl;
	cout <<"청결 : "<<animal -> clean << endl;
}

int main(){
	Animal *list[10];
	int animal_num=0;
	int i;
	
	for(;;){
		cout << "1. 동물 추가하기"<<endl;
		cout << "2. 놀기"<<endl;
		cout << "3. 상태 보기"<<endl;
		
		int input;
		cin >> input;
		
		switch(input){
			int play_with;
			case 1:
				list[animal_num] = Animal;
				create_animal(list[animal_num]);
				
				animal_num++;
				break;
				
			case 2:
				cout <<"누구랑 놀랴? : ";
				cin >> play_with;
				
				if(play_with < animal_num) play (list[play_with]);
				
				break;
				
			case 3:
				cout << "누구껄 보게? : ";
				cin >> play_with;
				if(play_with< animal_num) show_stat(list[play_with]);
				break;
		}
		
		for (i=0;i != animal_num;i++){
			one_day_pass(list[i]);
		}
	}
	for (i=0;i!=animal_num; i++){
		deletelist[i];
	}
}
