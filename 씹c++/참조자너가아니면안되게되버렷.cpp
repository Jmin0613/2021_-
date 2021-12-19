#include <iostream> 
using namespace std;

int main(){
	int a =10;
	int &another_a =a;
	
	int b=3;
	another_a=b; //b를 참조하라는게 아니라, b의 값을 대입하라는 것 
}

// 한 번 어떤 변수의 참조자가 되면, 더이상 다른 변수를 참조 못함 
// 너가 아니면 안되게 되버렷! 
