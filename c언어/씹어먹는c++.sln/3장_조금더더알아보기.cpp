#include <iostream>
using namespace std; 
int main(){
	int lucky_number = 3;
	cout << "�� ��� ���� ���� ������" << endl;
	
	int user_input;
	
	while(1){
		cout <<"�Է� : ";
		cin >>user_input;
		if (lucky_number == user_input){
			cout << "�­���"<<endl;
			break;
		}else {
			cout << "�ٽ� ����" <<endl;
		}
	}
	
	return 0;
}
