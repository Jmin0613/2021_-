#include <iostream>
using namespace std;

int main() {
	int sum1 = 0, sum2 = 0, sum3 = 0;
	double sum4 = 0;
	int i;
	double j;

	for (i = 1; i < 101; i++) {
		sum1 += i;
	} //1~100��
	cout << "1~100�� �� : " << sum1 << endl;

	for (i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			sum2 += i;
		}
		else {
			sum3 += i;
		}
	}// ¦��/Ȧ���� ��
	cout << "1~100 �� ¦���� �� : " << sum2 << endl;
	cout << "1~100 �� Ȧ���� �� : " << sum3 << endl;


	for (j = 1; j < 101; j++) {
		sum4 += (1 / j);
	}
	cout << "1~100�� ������ �� : " << sum4 << endl;

	return 0;
}