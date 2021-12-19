#include <stdio.h>
#define SWAP(x,y,t)	((t)=(x),(x)=(y),(y)=(t))

void seletion_sort(int list[], int n);
void insertion_sort(int list[], int n);

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

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	seletion_sort(list, 9);
	printfArray(list, 9, "Selection "); //정렬 후  

	return 0;
} 

void seletion_sort(int list[], int n) {
	int i, j, tmp, least;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) //최소값 탐색
			if (list[j] < list[least]) least = j;
		SWAP(list[i], list[least], tmp); //배열 항목 교환
		printStep(list, n, i + 1);
		/*
		list[i]에 list[least] 최소값이 들어감.
		list는 제일 왼쪽리스트이니, 제일 작은 숫자가 앞으로가는 선택정렬 실행된거임
		이를 반복!
		첫 for문에 ;n-1; 인것은 list의 요소갯수가 9개이기에 8번만 해도되서 n-1한 것임
		두번째 for문에 ;j<n; 은 전체요소를 검사해야하기에 j<n인 것임
		*/
	}
}

void insertion_sort(int list[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j]; //오른쪽으로 이동
		list[j + 1] = key; // j까지 비교해서 더 큰거 없으면 j+1에 그대로 삽입
		printStep(list, n, i);
	}
	/*
	첫번째 for문에 i=1인 이유는, 삽입되는 것이 처음에 1번 index에 가기때문.
	그것과 같게 두번째 for문은 j=j-i로 시작!
	앞에있는 것과 크기를 비교해야하니간!
	*/
}
