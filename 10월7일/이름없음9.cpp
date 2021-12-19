#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//���� ��ǥ�� ������ ����ü ����
struct points {
	int x, y;
};

points* minPairs = NULL; //�ֱ������� ������ ���� 
double min = -1; //�ֱ����� �Ÿ�  

//dist �ΰ��� ��, ���� �� ����
double minNum(double a, double b) {
	if (a < b)
		return a;
	else
		return b;
}

// ����� ������ ����ϴ� �Լ�
void printPoint(points* pair, int size) {
	for (int i = 0; i < size; i++) {
		printf("(%d, %d)\n", (pair + i)->x, (pair + i)->y);
	}printf("\n");
}

// �Ÿ� ��� �� �ֱ��� �� �� �Ÿ��� ��
double Distance(points* a, points* b) {
	double dist;

	dist = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2)); //�Ÿ���� 

	if (min == -1 || dist < min) { //����� �Ÿ��� �ּҰ��� ���  
		*minPairs = *a;
		*(minPairs + 1) = *b;
		min = dist;
	} return dist;
}

//�ֱ��� �� ���ϱ� 
double FindClosestPairDC(points* pairs, int left, int right) {
	//���� 4�� �̻��� ��� 
	if (right - left <= 10) //������ ������ ������ 10�̳��� ���
		return FIndClosestPair(pairs, left, right);

	int mid = (left + right) / 2; //������ ���� �߾� �ε��� ����

	//�Ÿ�����, CPl, CPr ����  
	double distRange;
	double CPleft, CPright;

	CPleft = FindClosestPairDC(pairs, left, mid);
	CPright = FindClosestPairDC(pairs, mid + 1, right);
	distRange = minNum(CPleft, CPright);

}

double FIndClosestPair(points* paris, int left, int right) {
	double min =

	////���� 2���� ���
	//if (size == 2)
	//	return Distance(pairs, pairs + 1);

	////���� 3���� ���
	//if (size == 3) {
	//	double dist1, dist2, dist3;
	//	dist1 = Distance(pairs, pairs + 1);
	//	dist2 = Distance(pairs, pairs + 2);
	//	dist3 = Distance(pairs + 1, pairs + 3);

	//	min = minNum(dist1, dist2);
	//	min = minNum(dist1, min);
	//	return min;
	//}
}

int main() {
	int n;
	points* pairs = NULL; //�� �Է¹��� ���� 
	int i;

	//��ǥ ���� �Է� 
	printf("��ǥ���� ������ x,y ��� 0~99����\n");
	printf("�ǵ��� 100�� ���Ϸ� �Է�.\n");
	printf("��ǥ�� ���� �Է� : ");
	scanf_s("%d", &n);

	//�Է¹��� �� ��ŭ ���� �Ҵ� 
	//��ǥ�� ������ ����ü�� �Է��� ũ�⸸ŭ ���� 
	pairs = (points*)malloc(sizeof(points) * n);

	//�ֱ������� �����ϱ� ���� ���� �Ҵ�
	minPairs = (points*)malloc(sizeof(points) * 2); //2�� 

	// ��ǥ ������ ����
	int a, b;
	int cnt = 1;

	a = rand() % 100;
	b = rand() % 100;
	(pairs[0].x) = a;
	(pairs[0].y) = b;
	while (cnt != n) {
		a = rand() % 100;
		b = rand() % 100;
		// �ߺ��Ǹ� �ȵǴϰ� �˻����ֱ� 
		for (int i = 1; i < n; i++) {
			if (a != pairs[i].x && b != pairs[i].y) {
				((pairs + cnt)->x) = (rand() % 10); //�����ǥ, 0~99���� x ����  
				((pairs + cnt)->y) = (rand() % 100); //�����ǥ, 0~99���� y ���� 
				cnt++;
			}
		}
	}

	//������ �� �����ֱ�
	printPoint(pairs, n);

	//DC�� ������ �� ã�� 
	//DC�� ������ �� ã��  
	//���ڷ� ����, ������ �����ֱ� 
	int min = 50, max = 50;
	for (int i = 0; i < n; i++) {
		if (pairs[i].x < min)
			min = i;
		if (pairs[i].y > max)
			max = i;
	}
	FindClosestPairDC(pairs, min, max);

	//�ֱ��� ���� �� �����ֱ�
	printf("�ֱ��� �� : (%d, %d)�� (%d, %d)\n", (minPairs + i)->x, (minPairs + i)->y);

	//�Ҵ��� �޸� ����  
	free(pairs);
	free(minPairs);

	return 0;
}


