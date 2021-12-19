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

void insertion_sort(int list[],int n){
	int i,j,key; //i-> , j-> , key ->
	for(i=1;i<n;i++){
		key=list[i];
		for(j=i-1 ; j>=0 && list[j] > key ; j--) //list[j]>key -> key값보다 크니간 뒤로 이동
			//j=i-1넣은 이유 : list[i]가 key의 값이니간(i는 위치), i-1인 j부터 검사하느라. 
			list[j+1]=list[j]; //key보다 큰 값을 뒤(오른쪽)로 한칸 이동
		list[j+1]=key; //key가 모든 값보다 커서 위 for문을 나온 경우, j+1그 자리에 그대로 삽입
		//j+1이 i이기에 i값에 그대로 key를 넣음 
		printStep(list,n,i);
	}
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	insertion_sort(list,8);
	printfArray(list, 9, "Selection "); //정렬 후  

	return 0;
} 

