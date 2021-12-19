#include <iostream>
using namespace std;

class Base {
public :
	int bPublic;
		
protected :
	int bProtected;
		
private :
	int bPrivate;
};

class Derived : public Base {
	public :
		void dFunc(){
			bPublic =1;
			bProtected =2;
			//bPrivate=3;
		}
};

int main(){
	Base b;
	Derived d;
	
	b.bPublic=1;
	//b.bProtected=2;
	//b.bPrivate;
}
