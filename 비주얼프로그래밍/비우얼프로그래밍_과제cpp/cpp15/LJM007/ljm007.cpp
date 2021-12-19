#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j;

	cout << "±¸±¸´Ü!" << endl;

	for (j = 1; j < 10; j++) {
		for (i = 2; i < 10; i++) {
			cout << i << "*" << j << "=" << (i * j) << "\t";
		}
		cout << endl;
	}
}