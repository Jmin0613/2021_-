#include <stdio.h>

int main() {
	int arr[10];
	int f_max, s_max;

	printf("10���� ���ڸ� �Է��Ͻÿ�...\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}

	//�ӽð� �־�α�
	if (arr[0] > arr[1]) {
		f_max = arr[0];
		s_max = arr[1];
	}
	else {
		f_max = arr[1];
		s_max = arr[0];
	}

	//f_max�� s_max ã��  
	for (int i = 0; i < 10; i++) {
		//f_maxã�Ƽ�, f_max�� s_max �� �� ���� 
		if (arr[i] > f_max) {
			s_max = f_max;
			f_max = arr[i];
		}
		//s_max�� ����  
		else if (arr[i] > s_max) {
			s_max = arr[i];
		}
	}

	printf("���� ū �� : %d\n", f_max);
	printf("2������ ū �� : %d\n", s_max);

	return 0;
}