#include<iostream>
using namespace std;

namespace doodle{
	int n;
	void set(){
		n=20;
	}
} 

namespace google{
	int n;
	void set(){
		n=30;
	}
}

int main(){
	doodle::set(); //n=20
	google::set(); //n=20;
	
	cout<<doodle::n<<endl; //n=20
	cout<<google::n<<endl; //n=30;
}
