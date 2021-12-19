//공백 후 * 채우기
#include <iostream>
using namespace std;

int main() {
	int i, j;
	int flr = 5;

	for (i = 0; i < flr; i++) { //공백채우기
		for (j = flr - 1; j > i; j--) {
			cout << " ";
		}

		for (j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		} cout << endl;
	}

	return 0;
}