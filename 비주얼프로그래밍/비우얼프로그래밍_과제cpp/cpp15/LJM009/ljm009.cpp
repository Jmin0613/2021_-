//���� �� * ä���
#include <iostream>
using namespace std;

int main() {
	int i, j;
	int flr = 5;

	for (i = 0; i < flr; i++) { //����ä���
		for (j = flr - 1; j > i; j--) {
			cout << " ";
		}

		for (j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		} cout << endl;
	}

	return 0;
}