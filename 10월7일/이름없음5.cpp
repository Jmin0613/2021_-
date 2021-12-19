static void merge(int list[], int left, int mid, int right) {
	int i, j, k = left, l; // k�� ���ĵ� ����Ʈ�� ���� �ε���
	static int sorted[MAX_SIZE]; //���յ� ����Ʈ ������ ���� �ӽù迭

	//���� ���ĵ� list�� ����
	for (i = left, j = mid + 1; i <= mid && j <= right;)
		sorted[k++] = (list[i] <= list[j]) ? list[i++] : list[j++];

	//���ʿ� �����ִ� ���ڵ� �ϰ� ����
	if (i > mid)
		for (l = j; l <= right; l++, k++)
			sorted[k] = list[l];
	else
		for (l = i; l <= mid; l++, k++)
			sorted[k] = list[l];

	//�迭 sorted[]�� ����Ʈ�� �迭 list�� �ٽ� ����
	for (l = left; l <= right; l++)
		list[l] = sorted[l];
}

void FindClosestPairDC(points*pairs, int left, int right) {
	if (right - left <= 10) //������ ������ ������  
		return FindCLosestPair(pairs[], left,right);
	
	int mid=left+(right-left)/2; // �߾� ����Ʈ �ε��� 
	FindCLosest(pairs,left,rifgt);
	FindCLosest(pairs,mid+1,rifgt);
		
	if (left < right) {
		int mid = (left + right) / 2; //�յ� ����
		merge_sort(list, left, mid); //�κ� ����Ʈ ����
		merge_sort(list, mid + 1, right); //�κ� ����Ʈ ����
		merge(list, left, mid, right); //����
	}
}

int main(){
	int n;
	points* pairs = NULL; //�� �Է¹��� ���� 
	int i;
	
	//��ǥ ���� �Է� 
	printf("��ǥ���� ������ x,y ��� 0~99����\n");
	printf("�ǵ��� 100�� ���Ϸ� �Է�.\n"); 
	printf("��ǥ�� ���� �Է� : ");
	scanf("%d", &n);
	
	//�Է¹��� �� ��ŭ ���� �Ҵ� 
	//��ǥ�� ������ ����ü�� �Է��� ũ�⸸ŭ ���� 
	pairs=(points*)malloc(sizeof(points)*n); 
	
	//�ֱ������� �����ϱ� ���� ���� �Ҵ�
	minPairs=(points*)malloc(sizeof(points)*2); //2�� 
	
	// ��ǥ ������ ����
	int a,b; 
	int cnt=0;
	while(cnt!=n){
		a=rand()%100;
		b=rand()%100;
		// �ߺ��Ǹ� �ȵǴϰ� �˻����ֱ� 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if (a!=pairs[i].x&&b!=pairs[i].y){
					(pairs+i)->x =rand()%100; //�����ǥ, 0~99���� x ����  
					(pairs+i)->y =rand()%100; //�����ǥ, 0~99���� y ���� 
					cnt++; 
				}
			}
		}
	}
	
	//������ ��ǥ �����ֱ� 
	printPoint(pairs, n); 
	
	//DC�� ������ �� ã��  
	//���ڷ� ����, ������ �����ֱ� 
	int min=50, max=50;
	for(int i=0;i<n;i++){
		if(pairs[i][0]<min)
			min=i;
		if(pairs[i][0]>max)
			max=i;
	} 
	FindClosestPairDC(pairs[],min,max);
	
	printf("�ֱ��� �Ÿ� : %lf\n");
	printf("�ֱ��� �� : (%d, %d)�� (%d, %d)\n", (minPairs+i)->x, (minPairs+i)->y);
	
	//�Ҵ��� �޸� ����  
	free(pairs);
	free(minPairs);
	
	
} 
