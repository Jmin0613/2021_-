//1을 제외하고 자기보다 작은수로 나누어지면 소수x
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j;
	int cnt = 0;
	int arr[1000];
	int k = 1, p;

	for (i = 1; i < 1000; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0) { //자신보다 낮은 숫자로 나누어지는지
				break;
			}
		}
		if (i == j) { //배열에 저장 및 카운트
			arr[k] = i;
			k++;
			cnt += 1;
		}
	}

	for (p = 1; p < k; p++) {
		cout << arr[p] << "  ";

		if (p % 10 == 0) { //어떻게하면 한줄에 10칸씩 나타낼까? 모르겠어서 arr[0]은 0으로 냅두고 arr[1]부터 할당한 후 출력
			cout << endl;
		}
	}cout << endl;

	cout << "소수의 갯수 : " << cnt << endl;

	return 0;
}