#include <iostream>
using namespace std;

int main() {
	int i, sum = 0;
	float ave;
	int grade[5] = { 55,06,33,88,99 };

	for (i = 0; i < 5; i++) {
		sum += grade[i];
	}
	ave = sum / 5.;

	cout << ave << endl;
}