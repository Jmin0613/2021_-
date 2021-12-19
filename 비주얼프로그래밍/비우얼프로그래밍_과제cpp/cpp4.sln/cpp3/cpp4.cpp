#include <iostream>
#include <string>
using namespace std;

int main() {
	double height, weight;
	double bmi;

	cout << "키(cm) 입력 : ";
	cin >> height;

	cout << "체중(kg) 입력 : ";
	cin >> weight;

	bmi = (weight / (height / 100 * height / 100));
	cout << "BMI : " << bmi << endl;

	if (bmi < 20) {
		cout << "저체중입니다." << endl;
	}
	else if (20 <= bmi < 25) {
		cout << "정상체중입니다." << endl;
	}
	else if (25 <= bmi < 30) {
		cout << "경도비만입니다." << endl;
	}
	else if (30 <= bmi < 40) {
		cout << "비만입니다." << endl;
	}
	else {
		cout << "고도비만입니다." << endl;
	}

	return 0;
}