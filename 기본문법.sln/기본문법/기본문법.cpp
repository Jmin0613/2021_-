#include <iostream>
using namespace std;

int main() {
	/*c++��Ÿ��*/
	int a(10);
	int b(a+5);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	/*���� ��� for��*/
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int n : arr) { // arr�ȿ� �ִ� ��� �� ���� n���� ����, n�� ���ڴ�.
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl; //arr�� �ȹٲ�

	for (int &n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl; //arr�� �ٲ�

	return 0;
}