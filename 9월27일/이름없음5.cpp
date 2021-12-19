#include <stdio.h>
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

void selection_sort(int list[],int n){
	int i,j,least,tmp; //least -> 작은값(인덱스) 저장, tmp->SWAP보낼 교환도구 
	for(i=0;i<n;i++){
		least=i;
		for(j=i+1;j<n;j++) //정렬x인 부분에서 작은거 찾기, 최소값 탐색 
			if(list[j]<list[least]) least=j; //작은값 선택해서 저장 
		SWAP(list[i],list[least],tmp); //배열 항목 교환
		printStep(list,n,i+1);
		/*
		list[i]에 list[least] 최소값이 들어감.
		list는 제일 왼쪽리스트이니, 제일 작은 숫자가 앞으로가는 선택정렬 실행된거임
		이를 반복!
		첫 for문에 ;n-1; 인것은 list의 요소갯수가 9개이기에 8번만 해도되서 n-1한 것임
		두번째 for문에 ;j<n; 은 전체요소를 검사해야하기에 j<n인 것임
		*/
	}
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	selection_sort(list,8);
	printfArray(list, 9, "Selection "); //정렬 후  

	return 0;
} 

