#include <iostream>
using namespace std;

int main(){
	int *a=new int(3);
	int *b=a;
	//int *b=new int(*a);
	*a=5;
	cout<<*a<<endl;
	cout<<*b<<endl;
	
	delete a;
	delete b;
}
