#include <iostream>
using namespace std;

int main(){
	int i=1;
	int max=0;
	int score;
	
	do{
		cout << "���� �Է� : ";
		cin >> score;
		
		if(score > max){
			max = score;
		}
		i++;
	}while (i<=5);
	
	cout << "�ִ� ���� = "<<max <<endl;
	return 0; 
}
