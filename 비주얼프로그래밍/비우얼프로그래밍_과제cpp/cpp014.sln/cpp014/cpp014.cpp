#include <iostream>
using namespace std;

int factorial(int i);

int main() {
	int i;
	cout << "정수 하나를 입력하시오 : ";
	cin >> i;

	cout << i << "! = " << factorial(i) << endl;

	return 0;
}

int factorial(int i) {
	if (i == 1) {
		return 1; //1반환
	}

	return i * factorial(i - 1);
}