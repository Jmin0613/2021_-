//10�� ���� ���� -> �迭�� ���� -> ���, �ּ�, �ִ밪
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int i, sum = 0;
	int max = 0, min;
	int arr[10];

	srand((unsigned int)time(0)); //���尪
	
	cout << "a [] : ";
	for (i = 0; i < 10; i++) {
		arr[i] = rand();
		cout << arr[i] << "  ";
	}cout << endl; //���� 10�� ���� �� �迭�� ����
	min = arr[0]; //�ּڰ� ���ϱ����� �Ҵ�

	//���
	for (i = 0; i < 10; i++) {
		sum += arr[i];
	}
	sum /= 10;
	cout << "��� : " << sum << endl;

	//�ִ�
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}cout << "�ִ� : " << max << endl;

	//�ּڰ�
	for (i = 0; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}cout << "�ּڰ� : " << min << endl;

	return 0;
}