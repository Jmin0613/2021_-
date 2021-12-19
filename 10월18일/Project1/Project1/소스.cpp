#include <stdio.h>

int main() {
	int arr[10];
	int f_max, s_max;

	printf("10개의 숫자를 입력하시오...\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}

	//임시값 넣어두기
	if (arr[0] > arr[1]) {
		f_max = arr[0];
		s_max = arr[1];
	}
	else {
		f_max = arr[1];
		s_max = arr[0];
	}

	//f_max와 s_max 찾기  
	for (int i = 0; i < 10; i++) {
		//f_max찾아서, f_max와 s_max 둘 다 갱신 
		if (arr[i] > f_max) {
			s_max = f_max;
			f_max = arr[i];
		}
		//s_max만 갱신  
		else if (arr[i] > s_max) {
			s_max = arr[i];
		}
	}

	printf("가장 큰 값 : %d\n", f_max);
	printf("2번쨰로 큰 값 : %d\n", s_max);

	return 0;
}