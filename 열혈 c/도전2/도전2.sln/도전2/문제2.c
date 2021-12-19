#include <stdio.h>

int main_2() {
	int num;
	int arr[50];
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num, sizeof(num));

	int i = 0;
	while (num > 0){
		if (num % 2 != 0)
			arr[i] = 1;
		else
			arr[i] = 0;

		num /= 2;
		i++;
	}
	
	while (i > 0) {
		i--;
		printf("%d", arr[i]);
	}

	return 0;
}