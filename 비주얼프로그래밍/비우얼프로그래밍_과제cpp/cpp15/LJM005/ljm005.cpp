#include <iostream>
using namespace std;

int main() {
	int sum1 = 0, sum2 = 0, sum3 = 0;
	double sum4 = 0;
	int i;
	double j;

	for (i = 1; i < 101; i++) {
		sum1 += i;
	} //1~100합
	cout << "1~100의 합 : " << sum1 << endl;

	for (i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			sum2 += i;
		}
		else {
			sum3 += i;
		}
	}// 짝수/홀수의 합
	cout << "1~100 중 짝수의 합 : " << sum2 << endl;
	cout << "1~100 중 홀수의 합 : " << sum3 << endl;


	for (j = 1; j < 101; j++) {
		sum4 += (1 / j);
	}
	cout << "1~100의 역수의 합 : " << sum4 << endl;

	return 0;
}