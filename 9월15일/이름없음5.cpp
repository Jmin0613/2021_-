#include <stdio.h>
#define MAX_SIZE 1024 
#include <time.h>

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

static void merge(int list[], int left, int mid, int right) {
	int i, j, k = left, l; // k는 정렬된 리스트에 대한 인덱스
	static int sorted[MAX_SIZE]; //병합된 리스트 저장을 위한 임시배열

	//분할 정렬된 list의 병합
	for (i = left, j = mid + 1; i <= mid && j <= right;)
		sorted[k++] = (list[i] <= list[j] ? list[i++] : list[j++]);

	//한쪽에 남아있는 레코드 일괄 복사
	if (i > mid)
		for (l = j; l <= right; l++, k++)
			sorted[k] = list[l];
	else
		for (l = i; l <= mid; l++, k++)
			sorted[k] = list[l];

	//배열 sorted[]의 리스트를 배열 list로 다시 복사
	for (l = left; l <= right; l++)
		list[l] = sorted[l];
}

void merge_sort(int list[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2; //균등 분할
		merge_sort(list, left, mid); //부분 리스트 정렬
		merge_sort(list, mid + 1, right); //부분 리스트 정렬
		merge(list, left, mid, right); //병합
	}
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	
	clock_t start = clock(); // 시작 시간 저장
	merge_sort(list, 0,8);
	clock_t end = clock(); // 코드가 끝난 시간 저장

	printfArray(list, 9, "Selection "); //정렬 후 
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC); 

	return 0;
}

