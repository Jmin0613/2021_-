#include <iostream>
using namespace std;

int factorial(int i);

int main() {
	int i;
	cout << "���� �ϳ��� �Է��Ͻÿ� : ";
	cin >> i;

	cout << i << "! = " << factorial(i) << endl;

	return 0;
}

int factorial(int i) {
	if (i == 1) {
		return 1; //1��ȯ
	}

	return i * factorial(i - 1);
}