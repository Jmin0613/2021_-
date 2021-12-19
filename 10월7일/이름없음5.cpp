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

void FindClosestPairDC(points*pairs, int left, int right) {
	if (right - left <= 10) //생성된 점들의 범위가  
		return FindCLosestPair(pairs[], left,right);
	
	int mid=left+(right-left)/2; // 중앙 포인트 인덱스 
	FindCLosest(pairs,left,rifgt);
	FindCLosest(pairs,mid+1,rifgt);
		
	if (left < right) {
		int mid = (left + right) / 2; //균등 분할
		merge_sort(list, left, mid); //부분 리스트 정렬
		merge_sort(list, mid + 1, right); //부분 리스트 정렬
		merge(list, left, mid, right); //병합
	}
}

int main(){
	int n;
	points* pairs = NULL; //점 입력받을 변수 
	int i;
	
	//좌표 개수 입력 
	printf("좌표축의 범위는 x,y 모두 0~99까지\n");
	printf("되도록 100개 이하로 입력.\n"); 
	printf("좌표의 개수 입력 : ");
	scanf("%d", &n);
	
	//입력받은 수 만큼 동적 할당 
	//좌표를 저장할 구조체를 입력한 크기만큼 생성 
	pairs=(points*)malloc(sizeof(points)*n); 
	
	//최근접쌍을 저장하기 위해 동적 할당
	minPairs=(points*)malloc(sizeof(points)*2); //2개 
	
	// 좌표 난수로 생성
	int a,b; 
	int cnt=0;
	while(cnt!=n){
		a=rand()%100;
		b=rand()%100;
		// 중복되면 안되니간 검사해주기 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if (a!=pairs[i].x&&b!=pairs[i].y){
					(pairs+i)->x =rand()%100; //양수좌표, 0~99꺼지 x 범위  
					(pairs+i)->y =rand()%100; //양수좌표, 0~99까지 y 범위 
					cnt++; 
				}
			}
		}
	}
	
	//생성된 좌표 보여주기 
	printPoint(pairs, n); 
	
	//DC로 최접근 점 찾기  
	//인자로 왼쪽, 오른쪽 전해주기 
	int min=50, max=50;
	for(int i=0;i<n;i++){
		if(pairs[i][0]<min)
			min=i;
		if(pairs[i][0]>max)
			max=i;
	} 
	FindClosestPairDC(pairs[],min,max);
	
	printf("최근접 거리 : %lf\n");
	printf("최근접 점 : (%d, %d)와 (%d, %d)\n", (minPairs+i)->x, (minPairs+i)->y);
	
	//할당한 메모리 해제  
	free(pairs);
	free(minPairs);
	
	
} 
