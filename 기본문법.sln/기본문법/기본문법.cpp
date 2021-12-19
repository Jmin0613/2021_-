#include <iostream>
using namespace std;

int main() {
	/*c++스타일*/
	int a(10);
	int b(a+5);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	/*범위 기반 for문*/
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int n : arr) { // arr안에 있는 모든 각 항을 n으로 놓고, n을 쓰겠다.
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl; //arr값 안바뀜

	for (int &n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl; //arr값 바뀜

	return 0;
}