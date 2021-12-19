#include <iostream>
using namespace std;

class A{
public:
	A(int x, int *y):x(x),y(y){
		//cout<<x<<endl;
		//cout<<y<<endl;
		//cout<<*y<<endl;
	}
	
	int x;
	int *y;
};

int main(){
	A a(1, new int(2));
	A b =a;
	a.x=3;
	*a.y=4;
	
	cout<<b.x<<endl;
	cout<<*b.y<<endl;
	delete a.y;
}
