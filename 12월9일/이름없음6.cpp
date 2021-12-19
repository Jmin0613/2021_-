#include<iostream>
using namespace std;

int n =100;

namespace A {
	int n=0;
	namespace B {
		void set() {n=10;
		}
		int n=50;
	}
}

namespace C {
	void set();
	int n=0;
}

void C::set(){n=20;
}

int main(){
	using namespace A::B;
	
	set(); //n=10;
	C::set(); //n=20;
	
	cout<<::n<<endl; //100
	cout<<A::n<<endl; //10
	cout<<A::B::n<<endl; //50
	cout<<C::n<<endl; //20
}
