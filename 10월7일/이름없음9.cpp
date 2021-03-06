#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//점의 좌표를 저장할 구조체 생성
struct points {
	int x, y;
};

points* minPairs = NULL; //최근접점을 저장할 변수 
double min = -1; //최근접점 거리  

//dist 두개를 비교, 작은 값 리턴
double minNum(double a, double b) {
	if (a < b)
		return a;
	else
		return b;
}

// 저장된 점들을 출력하는 함수
void printPoint(points* pair, int size) {
	for (int i = 0; i < size; i++) {
		printf("(%d, %d)\n", (pair + i)->x, (pair + i)->y);
	}printf("\n");
}

// 거리 계산 및 최근접 점 간 거리와 비교
double Distance(points* a, points* b) {
	double dist;

	dist = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2)); //거리계산 

	if (min == -1 || dist < min) { //계산한 거리가 최소값인 경우  
		*minPairs = *a;
		*(minPairs + 1) = *b;
		min = dist;
	} return dist;
}

//최근접 점 구하기 
double FindClosestPairDC(points* pairs, int left, int right) {
	//점이 4개 이상인 경우 
	if (right - left <= 10) //생성된 점들의 범위가 10이내일 경우
		return FIndClosestPair(pairs, left, right);

	int mid = (left + right) / 2; //분할을 위해 중앙 인덱스 설정

	//거리범위, CPl, CPr 선언  
	double distRange;
	double CPleft, CPright;

	CPleft = FindClosestPairDC(pairs, left, mid);
	CPright = FindClosestPairDC(pairs, mid + 1, right);
	distRange = minNum(CPleft, CPright);

}

double FIndClosestPair(points* paris, int left, int right) {
	double min =

	////점이 2개인 경우
	//if (size == 2)
	//	return Distance(pairs, pairs + 1);

	////점이 3개인 경우
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
	points* pairs = NULL; //점 입력받을 변수 
	int i;

	//좌표 개수 입력 
	printf("좌표축의 범위는 x,y 모두 0~99까지\n");
	printf("되도록 100개 이하로 입력.\n");
	printf("좌표의 개수 입력 : ");
	scanf_s("%d", &n);

	//입력받은 수 만큼 동적 할당 
	//좌표를 저장할 구조체를 입력한 크기만큼 생성 
	pairs = (points*)malloc(sizeof(points) * n);

	//최근접쌍을 저장하기 위해 동적 할당
	minPairs = (points*)malloc(sizeof(points) * 2); //2개 

	// 좌표 난수로 생성
	int a, b;
	int cnt = 1;

	a = rand() % 100;
	b = rand() % 100;
	(pairs[0].x) = a;
	(pairs[0].y) = b;
	while (cnt != n) {
		a = rand() % 100;
		b = rand() % 100;
		// 중복되면 안되니간 검사해주기 
		for (int i = 1; i < n; i++) {
			if (a != pairs[i].x && b != pairs[i].y) {
				((pairs + cnt)->x) = (rand() % 10); //양수좌표, 0~99꺼지 x 범위  
				((pairs + cnt)->y) = (rand() % 100); //양수좌표, 0~99까지 y 범위 
				cnt++;
			}
		}
	}

	//생성된 점 보여주기
	printPoint(pairs, n);

	//DC로 최접근 점 찾기 
	//DC로 최접근 점 찾기  
	//인자로 왼쪽, 오른쪽 전해주기 
	int min = 50, max = 50;
	for (int i = 0; i < n; i++) {
		if (pairs[i].x < min)
			min = i;
		if (pairs[i].y > max)
			max = i;
	}
	FindClosestPairDC(pairs, min, max);

	//최근접 점의 쌍 보여주기
	printf("최근접 점 : (%d, %d)와 (%d, %d)\n", (minPairs + i)->x, (minPairs + i)->y);

	//할당한 메모리 해제  
	free(pairs);
	free(minPairs);

	return 0;
}


