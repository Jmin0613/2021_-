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
	doodle::set(); //n=20;
	doodle::google::set(); //m=30,n=40;
	
	cout<<doodle::m<<endl; // 30;
	cout<<doodle::n<<endl; // 20;
	cout<<doodle::google::n<<endl; // 40;
}
