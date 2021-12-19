#include <iostream>
#include <string>
using namespace std;

int main(){
	int a(10);
	int &b=a;
	b=15;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	
	int c=20;
	int &d=c;
	d=30;
	cout<<"c : "<<c<<endl;
	cout<<"d : "<<d<<endl;
}
