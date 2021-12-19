#include <iostream>

void asterisk (int i){
	if(i>1){
		asterisk(i/2);
		asterisk(i/2);
	}
	printf("* %d", i);
}

int main(){
	int i=5;
	asterisk(i);
}
