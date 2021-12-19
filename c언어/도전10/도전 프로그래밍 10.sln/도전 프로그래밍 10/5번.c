#include <stdio.h>
//소수 10개
int main_5() {
	int count = 0;
	int in_count = 0;

	for (int i = 2; i<1000 ;i++) {
		for (int j=1; j <= i; j++) {
			if (i % j == 0) {
				in_count++;
			}
		}
		if (in_count == 2) {
			printf("%d  ", i);
			count++;
		}
		in_count = 0;

		if (count == 10) {
			break;
		}
	}

	return 0;
}

/*
자기 자신과 1로만 나눠짐
2,3,4 ...
*/