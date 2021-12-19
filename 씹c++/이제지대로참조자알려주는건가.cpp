#include <iostream> 
using namespace std;

int main(){
	int a=3;
	int& another_a =a; //참조자 : 가리키고자하는 타입 뒤에 &붙이기 
	
	another_a = 5; //사실상 a에 대입하는 것과 같음 
	cout << "a : " << a<< endl;
	cout << "another_a : " << another_a<<endl;
	
	return 0;
}

//대신 참조자(레퍼런스) 사용시, 누구의 참조자인지 반드시 즉시 명시해야함 
