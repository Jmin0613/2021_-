#include <iostream>
using namespace std;

int main_1() {
	char name[10];
	int scr;

	cout << "�̸� �Է�: ";
	cin >> name;

	cout << "���� �Է�: ";
	cin >> scr;

	cout << name << "���� ������ " << scr << "�� �Դϴ�. " << endl;

	return 0;
}

int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	for (int(&ln)[3] : arr) {
		for (int& col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}

	for (auto& ln : arr) {
		for (auto& col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}
}