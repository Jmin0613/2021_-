#include <iostream>
using namespace std;

class MyClass{
	public :
		void PrintThis(){
			cout<<"唱狼 林家 "<<this<<endl;
		}
		
		int x;
};

int main(){
	MyClass a,b;
	
	cout<<"按眉 a狼 林家绰 "<<&a<<endl;
	cout<<"按眉 b狼 林家绰 "<<&b<<endl;
	
	a.PrintThis();
	b.PrintThis();
}
