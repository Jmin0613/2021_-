#include <iostream>
using namespace std;

int main(){
	int *a=new int(5);
	
	cout<<a<<endl; //a�� �ּҰ�  
	cout<<*a<<endl; //5
	
	*a=10;
	
	cout<<a<<endl; //a�� �ּҰ�  
	cout<<*a<<endl; //10
	
	delete a;
}
