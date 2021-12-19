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

//gap 만큼 떨어진 요소들을 삽입 정렬, 정렬의 범위는 first에서 last 
void sortGapInsertion(int list[],int first, int last, int gap){
	int i,j,key;
	for(i=first+gap ; i<=last ; i=i+gap){
	//i=gap시작부분+gap ; last전까지 실행 ; 다시 i에 gap더해서 아래코드 실행 
		key=list[i];
		for(j=i-gap;j>=first && key<list[j];j=j-gap)
			list[j+gap]=list[j];
		list[j+gap]=key; 
	}
}

//셸 정렬 알고리즘을 이용해 int 배열을 오름차순으로 정렬
void shell_sort(int list[], int n){
	int i,gap,count=0;
	for(gap=n/2;gap>0;gap=gap/2){
		if((gap%2)==0) gap++; //gap이 짝수이면 1을 더함, gap은 왠만하면 홀수로 하면 좋음  
		for(i=0;i<gap;i++)//부분 리스트의 개수는 gap 
			sortGapInsertion(list,i,n-1,gap);
		printStep(list, n, ++count); //중간 과정 출력용 문장  
	}
} 

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //정렬 전 
	shell_sort(list,8);
	printfArray(list, 9, "Selection "); //정렬 후  

	return 0;
} 

