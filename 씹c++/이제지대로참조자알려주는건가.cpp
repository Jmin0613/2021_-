#include <iostream> 
using namespace std;

int main(){
	int a=3;
	int& another_a =a; //������ : ����Ű�����ϴ� Ÿ�� �ڿ� &���̱� 
	
	another_a = 5; //��ǻ� a�� �����ϴ� �Ͱ� ���� 
	cout << "a : " << a<< endl;
	cout << "another_a : " << another_a<<endl;
	
	return 0;
}

//��� ������(���۷���) ����, ������ ���������� �ݵ�� ��� ����ؾ��� 
