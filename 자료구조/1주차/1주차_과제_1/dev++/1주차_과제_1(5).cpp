#include <iostream>
using namespace std;

int main(){
	int i=1, j;
	
	while(i<=5){
		j=1;
		while(j<=5-i){
			cout <<" ";
			j++;
		}j=1;
		while(j<=2*i-1){
			cout << "*";
			j++;
		}cout << endl;
		i++;
	}
	return 0;
}
