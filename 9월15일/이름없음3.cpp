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

void bubble_sort(int list[], int n) {
	int i, j, tmp, bChanged;
	for (i = n - 1; i > 0; i--) {
		bChanged = 0;
		for (j = 0; j < i; j++) {
			if (list[j] > list[j + 1]){
				SWAP(list[j], list[j + 1], tmp);
				bChanged = 1;
			}
		}
		if (!bChanged) break; //교환이 없으면 종료
		printStep(list, n, n - i);
	}
	/*
	뒤에서 부터 완료한 리스트가 있는거기에, 첫번째 for은 i=n-1이다.
	두번째 for은 앞에서부터 크기 비교하니간 j=0!
	*/
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	
	clock_t start = clock(); //시작  
	bubble_sort(list, 9);
	clock_t end = clock(); //끝  
	
	printfArray(list, 9, "Selection "); //정렬 후
	
	printf("걸린시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);  

	return 0;
}

