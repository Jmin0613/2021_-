#include <iostream>
using namespace std;

int main(){
	int *a=new int(5);
	
	cout<<a<<endl; //a의 주소값  
	cout<<*a<<endl; //5
	
	*a=10;
	
	cout<<a<<endl; //a의 주소값  
	cout<<*a<<endl; //10
	
	delete a;
}
