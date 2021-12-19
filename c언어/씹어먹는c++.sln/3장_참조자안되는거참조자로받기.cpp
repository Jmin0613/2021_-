#include <iostream>
using namespace std;

int function(){
	int a =5;
	return a;
}

int main(){
	const int& c =function();
	cout <<"c : " <<c <<endl;
	return 0;
}
