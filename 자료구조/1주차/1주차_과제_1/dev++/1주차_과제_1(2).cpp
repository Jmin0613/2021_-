#include <iostream>
using namespace std;

//int main(){
//	int i, j;
//	
//	for(i=1;i<=9;i++){
//		for(j=1;j<=9;j++){
//			cout << i*j <<"\t";
//		}
//		cout << endl;
//	}
//}

int main(){
	int i=1, j=1;
	
	while(i<=9){
		while(j<=9){
			cout<<i*j<<"\t";
			j++;
		}cout << endl;
		j=1;
		i++;
	}
	return 0;
}
