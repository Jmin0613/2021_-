#include<iostream>
using namespace std;

int n = 0;

namespace A {
	int n = 0;
	namespace B {
		void set() {
			n = 10;
		}
		int n = 0;
	}
}

namespace C {
	void set();
	int n = 0;
}

void C::set() {
	n = 20;
}

int main() {
	using namespace A::B;

	set(); //n=10;
	C::set(); //n=20;

	cout << ::n << endl; // namespace A::B::n, n=0;
	cout << A::n << endl; // namespace A::n , n=10;
	cout << A::B::n << endl; //n=0;
	cout << C::n << endl; //n=20;
}