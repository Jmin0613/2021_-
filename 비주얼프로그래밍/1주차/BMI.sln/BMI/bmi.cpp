#include <iostream>
using namespace std;

int main() {

	int height, weight;

	cout << "Ű(cm) : ";
	cin >> height;
	cout << "������(kg) : ";
	cin >> weight;

	double bmi = weight / (height / 100.0 * height / 100.0);
	cout << "bmi = " << bmi;

	return 0;
}