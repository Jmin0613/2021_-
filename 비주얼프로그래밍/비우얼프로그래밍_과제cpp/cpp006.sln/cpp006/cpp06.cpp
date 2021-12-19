#include <iostream> 
using namespace std;

int main() {
	int x, y;;
	int result = 1;
	cout << "두개의 정수를 입력 : ";
	cin >> x >> y;

	int i;
	for (i = 0; i < y; i++) {
		result *= x;
	}
	cout << x << " * " << y << " = " << result << endl;

	return 0;
}