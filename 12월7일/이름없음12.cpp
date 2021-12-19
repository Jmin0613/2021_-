#include <iostream>
using namespace std;

namespace doodle{
	int m,n;
	void set();
	namespace google{
		int n;
		void set();
	}
}

void doodle::set(){
	n=20;
}

void doodle::google::set(){
	m=30;
	n=40;
}

int main(){
	doodle::set(); //n=20
	doodle::google::set(); //n=40,m=30
	
	cout<<doodle::m<<endl; //m=30
	cout<<doodle::n<<endl; //n=20
	cout<<doodle::google::n<<endl; //n=30
}
