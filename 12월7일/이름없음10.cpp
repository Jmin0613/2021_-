#include<iostream>
using namespace std;

namespace doodle{
	int n;
	void set(){
		n=20;
	}
}

namespace google{
	void set(){
		doodle::n=30;
	}
}

int main(){
	doodle::set(); //n=20;
	cout<<doodle::n<<endl; //n=20;
	
	google::set(); //n=30;
	cout<<doodle::n<<endl; //n=30;
}
