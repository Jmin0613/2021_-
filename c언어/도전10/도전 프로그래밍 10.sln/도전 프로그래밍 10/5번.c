#include <stdio.h>
//�Ҽ� 10��
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
�ڱ� �ڽŰ� 1�θ� ������
2,3,4 ...
*/