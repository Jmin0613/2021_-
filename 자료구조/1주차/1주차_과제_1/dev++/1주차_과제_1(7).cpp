#include <iostream>
using namespace std;

int main(){
	int i=1;
	int sum =1;
	int x,y;
	cin >>x >>y;
	
	do{
		sum*=x;
		i++;
	}while(i<=y);
	cout << sum <<endl;
	
	return 0;
}
