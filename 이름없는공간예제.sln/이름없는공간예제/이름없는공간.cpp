#include <iostream>

namespace {
	//이 함수는 이 파일 안에서만 사용
	//이는 마치 static int OnlyInThisFile()과 동일
	int OnlyInThisFile(){}

	//이 변수 역시 static int x와 동일
	int only_int_this_file = 0;
} //namespace

int main() {
	OnlyInThisFile();
	only_int_this_file = 3;
} //사용x