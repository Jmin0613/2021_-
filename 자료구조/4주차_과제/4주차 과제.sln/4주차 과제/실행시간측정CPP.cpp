//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int algorism_a(int n);
//int algorism_b(int n);
//int algorism_c(int n);
//
//int main() {
//	clock_t start, end;
//	double duration;
//
//	int num;
//	cout << "1���� n������ ���� ���ϱ�!" << endl;
//	cout << "n�� �Է� : ";
//	cin >> num;
//	cout << endl << endl;
//
//	start = clock();
//	algorism_a(num);
//	end = clock();
//	duration = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << "end-star" << (double)(end-start) << endl;
//	cout << "�˰���a �� : " << algorism_a(num) << endl;
//	cout << "�˰���a ���� �ð� : " << duration << endl << endl;
//
//	start = clock();
//	algorism_b(num);
//	end = clock();
//	duration = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << "�˰���b �� : " << algorism_b(num) << endl;
//	cout << "�˰���b ���� �ð� : " << duration << endl << endl;
//
//	start = clock();
//	algorism_a(num);
//	duration = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << "�˰���c �� : " << algorism_c(num) << endl;
//	cout << "�˰���c ���� �ð� : " << duration << endl << endl;
//}
//
//int algorism_a(int n) {
//	int sum = 0;
//	sum = n * (n + 1) / 2;
//	return sum;
//}
//
//int algorism_b(int n) {
//	int sum = 0;
//	int i;
//	for (i = 0; i <= n; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int algorism_c(int n) {
//	int sum = 0;
//	int i, j, k;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			sum += 1;
//		}
//	}
//	return sum;
//}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int algorism_a(int n);
int algorism_b(int n);
int algorism_c(int n);

int main() {
	clock_t start, end;
	long double duration;

	int num;
	cout << "1���� n������ ���� ���ϱ�!" << endl;
	cout << "n�� �Է� : ";
	cin >> num;
	cout << endl << endl;

	start = clock();
	algorism_a(num);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "end-star" << (double)(end - start) << endl;
	cout << "�˰���a �� : " << algorism_a(num) << endl;
	cout << "�˰���a ���� �ð� : " << duration << endl << endl;

	start = clock();
	algorism_b(num);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "end-star" << (double)(end - start) << endl;
	cout << "�˰���b �� : " << algorism_b(num) << endl;
	cout << "�˰���b ���� �ð� : " << duration << endl << endl;

	start = clock();
	algorism_a(num);
	end = clock();
	duration = static_cast<unsigned(double)(end - start) / CLOCKS_PER_SEC;
	cout << "end-star" << static_cast<unsigned (double)(end - start) << endl;
	cout << "�˰���c �� : " << algorism_c(num) << endl;
	cout << "�˰���c ���� �ð� : " << duration << endl << endl;
}

int algorism_a(int n) {
	int sum = 0;
	sum = n * (n + 1) / 2;
	return sum;
}

int algorism_b(int n) {
	int sum = 0;
	int i;
	for (i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int algorism_c(int n) {
	int sum = 0;
	int i, j, k;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			sum += 1;
		}
	}
	return sum;
}