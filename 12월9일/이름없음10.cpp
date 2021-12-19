#include <iostream>
using namespace std;

int main(){
	int a=10, b=20, c=30;
	int *p=&a;
	int &r=b;
	int **pp=&p;			//p라는 포인터를 가리키는 더블 포인터 pp 
	int *(&rp) =p;		//p라는 포인터를 가리키는 레퍼런스 변수 rp 
	
	r = c / *p; 
	rp = &c;
	**pp = 40;
	*p = 50;
	*pp = &a;
	*rp = 60;
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<*p<<endl;
	cout<<r<<endl;
	cout<<**pp<<endl;
	cout<<*rp<<endl;
}
