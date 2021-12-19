//10개 난수 생성 -> 배열에 저장 -> 평균, 최소, 최대값
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int i, sum = 0;
	int max = 0, min;
	int arr[10];

	srand((unsigned int)time(0)); //씨드값
	
	cout << "a [] : ";
	for (i = 0; i < 10; i++) {
		arr[i] = rand();
		cout << arr[i] << "  ";
	}cout << endl; //난순 10개 생성 및 배열에 저장
	min = arr[0]; //최솟값 구하기위해 할당

	//평균
	for (i = 0; i < 10; i++) {
		sum += arr[i];
	}
	sum /= 10;
	cout << "평균 : " << sum << endl;

	//최댓값
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}cout << "최댓값 : " << max << endl;

	//최솟값
	for (i = 0; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}cout << "최솟값 : " << min << endl;

	return 0;
}