#include <iostream>
using namespace std;

int UpOne(int &ref){
	return ref+1;
}

int ChangeSign(int &ref){
	return ref*=-1;
}

int main(){
	int num;
	cout<<"num �Է� : ";
	cin>>num;
	
	cout<<UpOne(num)<<endl;
	cout<<ChangeSign(num)<<endl;
	return 0;
}
