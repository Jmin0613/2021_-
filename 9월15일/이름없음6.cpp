#include <stdio.h>
#include <time.h>
#define SWAP(x,y,t)	((t)=(x),(x)=(y),(y)=(t))

void printfArray(int arr[], int n, char* str) { //보여주기 
	printf("%s = ", str);
	for (int i = 0; i < n; i++) printf("%3d", arr[i]);
	printf("\n");
}

void printStep(int arr[], int n, int val) { //step 과정 보여줌
	int i;
	printf("	step %2d = ", val);
	for (i = 0; i < n; i++) printf("%3d", arr[i]);
	printf("\n");
}

int partition(int list[], int left, int right) {
	int tmp;
	int low = left + 1;
	int high = right;
	int pivot = list[left]; //피벗 설정
	while (low < high) { // low와 high 역전되지(엇갈리지) 않는 한 반복
		for (; low <= right && list[low] < pivot; low++);
		for (; high >= left && list[high] > pivot; high--);
		if (low < high) //선택된 두 레코드 교환
			SWAP(list[low], list[high], tmp);
	}
	SWAP(list[left], list[high], tmp); //high와 피벗 교환
	return high;
}

void quick_sort(int list[], int left, int right) {
	int q;
	if (left < right) { //정렬 범위가 2개 이상인 경우
		q = partition(list, left, right); //좌우로 분할
		quick_sort(list, left, q - 1); //왼쪽리스트 퀵 정렬
		quick_sort(list, q + 1, right); //오른쪽리스트 퀵 정렬
	}
}


int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	
	clock_t start = clock(); // 시작 시간 저장
	quick_sort(list,0,8);
	clock_t end = clock(); // 코드가 끝난 시간 저장

	printfArray(list, 9, "Selection "); //정렬 후  
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

	return 0;
} 

