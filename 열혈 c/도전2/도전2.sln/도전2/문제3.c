#include <stdio.h>

int main_3() {
	int num;
	int odd = 0, even = 9;
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력; ");
		scanf_s("%d", &num, sizeof(num));
		
		if (num % 2 != 0){ //홀수
			arr[odd] = num;
			odd += 1;
		}
		else { //짝수
			arr[even] = num;
			even -= 1;
		}
	}

	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}