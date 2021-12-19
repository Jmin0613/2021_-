#include <iostream>
using namespace std;

int main_1() {
	char name[10];
	int scr;

	cout << "이름 입력: ";
	cin >> name;

	cout << "점수 입력: ";
	cin >> scr;

	cout << name << "님의 점수는 " << scr << "점 입니다. " << endl;

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