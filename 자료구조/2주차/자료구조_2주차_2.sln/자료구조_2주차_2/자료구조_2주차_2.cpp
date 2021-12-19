#include <iostream>
using namespace std;

int main() {
	char word[20];
	cout << "영어단어를 입력 : ";
	cin >> word;
	int i = 0;

	while (word[i] != '\0') {
		i++;
	}
	while (--i >= 0) {
		cout << word[i];
	}
	cout << endl;
}