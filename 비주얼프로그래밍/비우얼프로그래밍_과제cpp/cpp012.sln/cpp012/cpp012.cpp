#include <iostream>
using namespace std;

void Larger(int x, int y, int* m);

int main() {
	int a, b, c;
	int max = 0;
	int* mptr = &max;

	cout << "세개의 정수를 입력하시오 : ";
	cin >> a >> b >> c;
	Larger(a, b, &max);
	if (max < c) {
		Larger(b, c, &max);
	}

	cout << "가장 큰 수는 : " << max << endl;

	return 0;
}

void Larger(int x, int y, int* m) {
	if (x > y) {
		*m = x;
	}
	else if (x < y) {
		*m = y;
	}
	else {
		*m = x;
	}
}