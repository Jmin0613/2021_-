#include <iostream>
using namespace std;

int main(){
	int i=1,j=1;
	
	while(i<=5){
		while(j<=i){
			cout <<"*";
			j++;
		}i++;
		j=1;
		cout <<endl; 
	}
	return 0; 
}
