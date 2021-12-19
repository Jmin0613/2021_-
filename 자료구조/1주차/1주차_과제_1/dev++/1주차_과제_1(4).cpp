#include <iostream>
using namespace std;

int main(){
	int i=1, j=1;
	
	while(i<=5){
		while(j<=5-i){
			cout << " ";
			j++;
		}j=1;
		while(j<=i){
			cout << "*";
			j++;
		}j=1;
		i++;
		cout << endl;
	}
	return 0;
}
