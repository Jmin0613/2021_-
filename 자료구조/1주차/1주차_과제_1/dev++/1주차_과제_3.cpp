#include <iostream>
using namespace std;

float factorial (float a){
	float i,j=1;
	for(i=1;i<=a;i++){
		j=j*i;
	}
	return j;
}

int main(){
	int num, i;
	float j,k=1;
	
	cin>>num;
	for(i=1;i<=num;i++){
		j=1/factorial(i);
		k=k+j;
	}cout <<"자연대수 e : "<<k;
	return 0;
}
