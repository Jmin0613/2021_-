#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int i, j, temp;
	int arr[10];

	srand((unsigned int)time(0));

	cout << "Before Sorting : ";
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100; //범위
		cout << arr[i] << "  ";
	}cout << endl;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}//값 바꾸기
		}
	}
	cout << "After Sorting : ";
	for (i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}

	return 0;
}