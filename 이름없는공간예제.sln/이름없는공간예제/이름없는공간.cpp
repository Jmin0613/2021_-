#include <iostream>

namespace {
	//�� �Լ��� �� ���� �ȿ����� ���
	//�̴� ��ġ static int OnlyInThisFile()�� ����
	int OnlyInThisFile(){}

	//�� ���� ���� static int x�� ����
	int only_int_this_file = 0;
} //namespace

int main() {
	OnlyInThisFile();
	only_int_this_file = 3;
} //���x