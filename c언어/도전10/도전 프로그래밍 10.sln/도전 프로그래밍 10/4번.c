#include <stdio.h>

int main_4() {
	int money = 3500;
	// cream = 500, shirim = 700, coca = 400
	// 1,2,3 / 2,3,1 / 4,1,2
	int i_money, j_money, p_money;

	printf("���� ����� �����ϰ� �ִ� �ݾ� : 3500\n");

	for (int i = 1; i * 500 < money; i++) {
		i_money = money - (i * 500);
		for (int j = 1; j * 700 < i_money; j++) {
			j_money = i_money - (j * 700);
			for (int p = 1; p * 400 <= j_money; p++) {
				p_money = j_money - (p * 400);
				if (p_money == 0) {
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, p);
				}
			}
		}
	}

	return 0;
}