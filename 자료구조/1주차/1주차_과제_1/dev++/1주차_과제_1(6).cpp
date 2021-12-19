#include <iostream>
using namespace std;

int main(){
	int i=1;
	int max=0;
	int score;
	
	do{
		cout << "점수 입력 : ";
		cin >> score;
		
		if(score > max){
			max = score;
		}
		i++;
	}while (i<=5);
	
	cout << "최대 점수 = "<<max <<endl;
	return 0; 
}
