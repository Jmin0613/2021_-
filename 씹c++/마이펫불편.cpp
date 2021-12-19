#include <iostream>
using namespace std;

typedef struct Animal{
	char name[30];
	int age;
	
	int health;
	int food;
	int clean;
} Animal;

void create_animal (Animal *animal){
	cout << "������ �̸�? ";
	cin  >> animal -> name;
	
	cout << "������ ����? ";
	cin  >> animal -> age;
	
	animal -> health = 100;
	animal -> food = 100;
	animal -> clean = 100;
}

void play (Animal *animal){
	animal -> health +=10;
	animal -> food -= 30;
	animal -> clean -=20;
}

void one_day_pass(Animal *animal){
	animal -> health -=10;
	animal -> food -= 30;
	animal -> clean -=20;
}

void show_stat (Animal *animal){
	cout << animal -> name << "�� ����" <<endl;
	cout << "ü�� : "<<animal->health << endl;
	cout << "��θ� : "<<animal -> food << endl;
	cout << "û�� : " <<animal -> clean << endl;
}

int main (){
	Animal *list[10];
	int animal_num =0;
	
	for (;;){
		cout << "1. ���� �߰��ϱ�"<<endl;
		cout << "2. ���"<<endl;
		cout << "3. ���� ����"<<endl;
		
		int input;
		cin >> input;
		
		swich (input) {
			int play_with;
			case 1:
				list[animal_num] = new Animal;
				create-animal(list[animal_num]);
				
				animal_num++;
				break;
				
			case 2:
				cout <<"������ ���? : "
				cin >> play_with;
				
				if (play_with < animal_num) play(list[play_with]);
				break;
				
			case 3:
				cout << "������ ����? : ";
				cin >> play_with;
				
				if(play_with <animal_num) show_stat(list[play_with]);
				break;
		} 
		
		for (int i=0;i!=animal_num;i++){
			one_day_pass(list[i]);
		}
	}for (int i=0;i!=animal_num;i++){
			delete list[i];
		}
}
