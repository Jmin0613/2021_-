#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "정수 두개를 입력하시오..." << endl;
	cin >> a >> b;

	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b << endl;
	cout << a << "%" << b << "=" << a % b << endl;

	return 0;
}