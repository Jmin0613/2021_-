#include <iostream>
using namespace std;

int main() {
	int i=1, sum=1;
	
	while(i<=10){
		sum*=i;
		i++;
	}
	cout << sum <<endl;
	
	return 0;
}
