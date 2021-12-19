#include <stdio.h>

int main_6() {
	int t;
	printf("ÃÊ(second)ÀÔ·Â : ");
	scanf_s("%d", &t);
	
	int h = 0, m = 0, s = 0;

	h = t / (60*60);
	m = (t - h * 60 * 60) / 60;
	s = t - ((h * 60 * 60) + (m * 60));

	printf("[h : %d, m : %d, s : %d]\n", h, m, s);

	return 0;
}