#include <iostream>
#include <string>
using namespace std;

int main() {
	double height, weight;
	double bmi;

	cout << "Ű(cm) �Է� : ";
	cin >> height;

	cout << "ü��(kg) �Է� : ";
	cin >> weight;

	bmi = (weight / (height / 100 * height / 100));
	cout << "BMI : " << bmi << endl;

	if (bmi < 20) {
		cout << "��ü���Դϴ�." << endl;
	}
	else if (20 <= bmi < 25) {
		cout << "����ü���Դϴ�." << endl;
	}
	else if (25 <= bmi < 30) {
		cout << "�浵���Դϴ�." << endl;
	}
	else if (30 <= bmi < 40) {
		cout << "���Դϴ�." << endl;
	}
	else {
		cout << "�����Դϴ�." << endl;
	}

	return 0;
}