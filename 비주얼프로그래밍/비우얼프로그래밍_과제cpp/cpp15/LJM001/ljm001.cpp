#include <iostream>
#include <string>
using namespace std;

int main() {
	int id;
	string name;

	cout << "학번 입력 : ";
	cin >> id;
	cout << "이름 입력 : ";
	cin >> name;

	cout << "[학번] : " << id << endl;
	cout << "[이름] : " << name << endl;

	return 0;
}