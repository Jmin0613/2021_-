#include <iostream>
using namespace std;

void pyramid(int flr);

int main() {
	int i, flr;
	
	for (i = 0; i < 3; i++) {
		cout << "�� �� ¥�� �Ƕ�̵带 �׸� ���ΰ�? ";
		cin >> flr;

		pyramid(flr);
	}
	return 0;
}

void pyramid(int flr) {
	int i, j;

	for (i = 0; i < flr; i++) {
		for (j = flr - 1; j > i; j--) {
			cout << " ";
		}

		for (j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}cout << endl;
	}
}
