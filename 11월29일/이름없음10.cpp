#include <iostream>
using namespace std;

int main(){
	int *a=new int(3);
	int *b=a;
	int *c=new int(*a);
	
	*a=5;
	
	cout<<*a<<endl;
	cout<<*b<<endl;
	cout<<*c<<endl;
	
	delete a;
	delete c;
}
