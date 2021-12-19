#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

#define MAX 10000
#define MAX_SIZE 1024
#define SWAP(x,y,t)	((t)=(x),(x)=(y),(y)=(t))

void selection_sort(int list[],int n); 
void insertion_sort(int list[],int n);
void bubble_sort(int list[], int n);
static void merge(int list[], int left, int mid, int right);
void merge_sort(int list[], int left, int right);
int partition(int list[], int left, int right);
void quick_sort(int list[], int left, int right);
void sortGapInsertion(int list[],int first, int last, int gap);
void shell_sort(int list[], int n);

int main() {
	int size;
	printf("배열의 크기 입력 : ");
	scanf("%d", &size);
	
	int *list = (int*)malloc(sizeof(int)*size);
	
	
	//선택 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n선택 정렬 시간측정 시작\n");
	clock_t start = clock();
	selection_sort(list,size-1);
	clock_t end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//삽입 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n삽입 정렬 시간측정 시작\n");
	start = clock();
	insertion_sort(list,size-1);
	end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//셸 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n셸 정렬 시간측정 시작\n");
	start = clock();
	shell_sort(list,size-1);
	end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//버블 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n버블 정렬 시간측정 시작\n");
	start = clock();
	bubble_sort(list, size);
	end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//퀵 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n퀵 정렬 시간측정 시작\n");
	start = clock();
	quick_sort(list,0,size-1);
	end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//합병 정렬  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n합병 정렬 시간측정 시작\n");
	start = clock();
	merge_sort(list, 0,size-1);
	end = clock();
	printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 	
	
	free(list);
	return 0;
} 


//선택정렬  
void selection_sort(int list[],int n){ 
	int i,j,least,tmp; //least -> 작은값(인덱스) 저장, tmp->SWAP보낼 교환도구 
	for(i=0;i<n;i++){
		least=i;
		for(j=i+1;j<n;j++) //정렬x인 부분에서 작은거 찾기, 최소값 탐색 
			if(list[j]<list[least]) least=j; //작은값 선택해서 저장 
		SWAP(list[i],list[least],tmp); //배열 항목 교환
		/*
		list[i]에 list[least] 최소값이 들어감.
		list는 제일 왼쪽리스트이니, 제일 작은 숫자가 앞으로가는 선택정렬 실행된거임
		이를 반복!
		첫 for문에 ;n-1; 인것은 list의 요소갯수가 9개이기에 8번만 해도되서 n-1한 것임
		두번째 for문에 ;j<n; 은 전체요소를 검사해야하기에 j<n인 것임
		*/
	}
}

//삽입정렬 
void insertion_sort(int list[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=list[i];
		for(j=i-1 ; j>=0 && list[j] > key ; j--) //list[j]>key -> key값보다 크니간 뒤로 이동
			//j=i-1넣은 이유 : list[i]가 key의 값이니간(i는 위치), i-1인 j부터 검사하느라. 
			list[j+1]=list[j]; //key보다 큰 값을 뒤(오른쪽)로 한칸 이동
		list[j+1]=key; // j까지 비교해서 더 큰거 없으면 j+1에 그대로 삽입
		//key가 모든 값보다 커서 위 for문을 나온 경우, j+1그 자리에 그대로 삽입
		//j+1이 i이기에 i값에 그대로 key를 넣음 
	}
		/*
	첫번째 for문에 i=1인 이유는, 삽입되는 것이 처음에 1번 index에 가기때문.
	그것과 같게 두번째 for문은 j=j-i로 시작!
	앞에있는 것과 크기를 비교해야하니간!
	*/
}

//버블정렬 
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
	}
	/*
	뒤에서 부터 완료한 리스트가 있는거기에, 첫번째 for은 i=n-1이다.
	두번째 for은 앞에서부터 크기 비교하니간 j=0!
	*/
}

//병합정렬  
static void merge(int list[], int left, int mid, int right) {
	int i, j, k = left, l; // k는 정렬된 리스트에 대한 인덱스
	static int sorted[MAX_SIZE]; //병합된 리스트 저장을 위한 임시배열

	//분할 정렬된 list의 병합
	for (i = left, j = mid + 1; i <= mid && j <= right;)
		sorted[k++] = (list[i] <= list[j]) ? list[i++] : list[j++];

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

//퀵정렬
int partition(int list[], int left, int right) {
	int tmp;
	int low = left + 1; //오른쪽으로 증가시킴
	int high = right; //왼쪽으로 감소시킴
	int pivot = list[left]; //가장 왼쪽데이터를 피벗 설정
	while (low < high) { // low와 high 역전되지(엇갈리지) 않는 한 반복
		for (; low <= right && list[low] < pivot; low++); //list[low]가 pivot보다 크면 멈춤
		for (; high >= left && list[high] > pivot; high--); //list[high]가 pivot보다 작으면 멈춤
		if (low < high) //low와 high가 아직 교차하지 않은 경우, for문 두개에서 선택된 두 레코드 교환
			SWAP(list[low], list[high], tmp);
	}
	SWAP(list[left], list[high], tmp); //high와 피벗 위치의 항목 교환 = 피벗을 중앙에 위치시킴
	return high; //피벗 위치를 반환, 피벗은 현재 high의 위치에있음
}
void quick_sort(int list[], int left, int right) {
	int q;
	if (left < right) { //정렬 범위가 2개 이상인 경우
		q = partition(list, left, right); //좌우로 분할
		quick_sort(list, left, q - 1); //왼쪽리스트 퀵 정렬 //(순환)
		quick_sort(list, q + 1, right); //오른쪽리스트 퀵 정렬 //(순환)
	}
}

//셸정렬
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
	for(gap=n/2;gap>0;gap=gap/2){ //1번->k=5, 2번->k=3, 3번->k=1, 과정되풀이
		if((gap%2)==0) gap++; //gap이 짝수이면 1을 더함, gap은 왠만하면 홀수로 하면 좋음  
		for(i=0;i<gap;i++) //부분 리스트의 개수는 gap 
			sortGapInsertion(list,i,n-1,gap); //n-1 -> 인덱스 보내기(0~8)  
	}
} 
 
