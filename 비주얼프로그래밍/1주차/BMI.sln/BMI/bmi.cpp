#include <iostream>
using namespace std;

int main() {

	int height, weight;

	cout << "Å°(cm) : ";
	cin >> height;
	cout << "¸ö¹«°Ô(kg) : ";
	cin >> weight;

	double bmi = weight / (height / 100.0 * height / 100.0);
	cout << "bmi = " << bmi;

	return 0;
}