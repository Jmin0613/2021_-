#include <iostream>
using namespace std;

class Base {
	public :
		Base(int a) {
			cout << "Base()"<<endl;
		}
};

class Derived : public Base {
	public :
		Derived() : Base(1){
			cout<<"Derived()"<<endl;
		}
};

int main(){
	Derived d;
}
