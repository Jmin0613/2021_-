#include <iostream> 
using namespace std;

int main(){
	int a =10;
	int &another_a =a;
	
	int b=3;
	another_a=b; //b�� �����϶�°� �ƴ϶�, b�� ���� �����϶�� �� 
}

// �� �� � ������ �����ڰ� �Ǹ�, ���̻� �ٸ� ������ ���� ���� 
// �ʰ� �ƴϸ� �ȵǰ� �ǹ���! 
