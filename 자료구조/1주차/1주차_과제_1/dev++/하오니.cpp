#include <iostream>

using namespace std;
 //�ϳ���ž  
 
void Hanoi (int n, char from, char via, char to);
 
int main(){
	Hanoi(4, 'A', 'B', 'C'); 
}

void Hanoi(int n, char from, char via, char to){
	//����Լ��� �ݵ�� ������ ������ �־�� �Ѵ�
	if (n==1){
		cout << from << " -> " << to << endl;
	} else{
		Hanoi(n-1,from,to,via);
		cout << from << " -> " << to<<endl;
		Hanoi(n-1,via,from,to);
	}
	Hanoi(n-1, from, to, via);
	cout << from << " -> " << to << endl;
	Hanoi(n-1,via, from, to);
}
