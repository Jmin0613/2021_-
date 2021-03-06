#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int algorism_a(int n);
int algorism_b(int n);
int algorism_c(int n);

int main() {
	clock_t start, end;
	double duration;

	int num;
	cout << "1부터 n까지의 합구하기" << endl;
	cout << "n을 입력: ";
	cin >> num;
	cout << endl << endl;

	start = clock();
	algorism_a(num);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "알고리즘a 합 : " << algorism_a(num) << endl;
	cout << "알고리즘a 실행 시간 : " << duration << endl << endl;

	start = clock();
	algorism_b(num);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "알고리즘b 합 : " << algorism_b(num) << endl;
	cout << "알고리즘b 실행 시간 : " << duration << endl << endl;

	start = clock();
	algorism_c(num);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "알고리즘c 합 : " << algorism_c(num) << endl;
	cout << "알고리즘c 실행 시간 : " << duration << endl << endl;
}

int algorism_a(int n) {
	return (n * (n + 1)) / 2;
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