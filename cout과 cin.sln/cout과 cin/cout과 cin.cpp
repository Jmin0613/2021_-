#include <iostream>

int main() {
	char name[10];
	int age;

	std::cin >> name >> age;
	std::cout << "당신의 이름은 " << name << "이며, 나이는 " << age << "살입니다." << std::endl;

	return 0;
}