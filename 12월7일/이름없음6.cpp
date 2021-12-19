#include<iostream>
using namespace std;

int inventory[8]={0};
int score=0;

void getItem(int itemId){
	inventory[itemId]++;
}

void getItem(int itemId, int cnt){
	inventory[itemId]+=cnt;
}

void getItem(int itemId, int cnt, int sc){
	inventory[itemId]+=cnt;
	score+=sc;
}

int main(){
	getItem(6,5);
	getItem(3);
	getItem(5,4,7000);
	
	for(int i : inventory){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Á¡¼ö : "<<score<<endl;
}
