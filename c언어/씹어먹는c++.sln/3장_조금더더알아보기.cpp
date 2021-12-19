#include <iostream>
using namespace std; 
int main(){
	int lucky_number = 3;
	cout << "³» ºñ¹Ğ ¼ö¸¦ ¸ÂÃç º¸¼¼¿À" << endl;
	
	int user_input;
	
	while(1){
		cout <<"ÀÔ·Â : ";
		cin >>user_input;
		if (lucky_number == user_input){
			cout << "¸Â­ŸÀ½"<<endl;
			break;
		}else {
			cout << "´Ù½Ã »ı°¢" <<endl;
		}
	}
	
	return 0;
}
