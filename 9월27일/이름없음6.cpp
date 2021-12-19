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
	printf("�迭�� ũ�� �Է� : ");
	scanf("%d", &size);
	
	int *list = (int*)malloc(sizeof(int)*size);
	
	
	//���� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n���� ���� �ð����� ����\n");
	clock_t start = clock();
	selection_sort(list,size-1);
	clock_t end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//���� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n���� ���� �ð����� ����\n");
	start = clock();
	insertion_sort(list,size-1);
	end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//�� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n�� ���� �ð����� ����\n");
	start = clock();
	shell_sort(list,size-1);
	end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//���� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n���� ���� �ð����� ����\n");
	start = clock();
	bubble_sort(list, size);
	end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//�� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n�� ���� �ð����� ����\n");
	start = clock();
	quick_sort(list,0,size-1);
	end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 
	
	//�պ� ����  
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printf("\n�պ� ���� �ð����� ����\n");
	start = clock();
	merge_sort(list, 0,size-1);
	end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	start=0, end=0; 	
	
	free(list);
	return 0;
} 


//��������  
void selection_sort(int list[],int n){ 
	int i,j,least,tmp; //least -> ������(�ε���) ����, tmp->SWAP���� ��ȯ���� 
	for(i=0;i<n;i++){
		least=i;
		for(j=i+1;j<n;j++) //����x�� �κп��� ������ ã��, �ּҰ� Ž�� 
			if(list[j]<list[least]) least=j; //������ �����ؼ� ���� 
		SWAP(list[i],list[least],tmp); //�迭 �׸� ��ȯ
		/*
		list[i]�� list[least] �ּҰ��� ��.
		list�� ���� ���ʸ���Ʈ�̴�, ���� ���� ���ڰ� �����ΰ��� �������� ����Ȱ���
		�̸� �ݺ�!
		ù for���� ;n-1; �ΰ��� list�� ��Ұ����� 9���̱⿡ 8���� �ص��Ǽ� n-1�� ����
		�ι�° for���� ;j<n; �� ��ü��Ҹ� �˻��ؾ��ϱ⿡ j<n�� ����
		*/
	}
}

//�������� 
void insertion_sort(int list[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=list[i];
		for(j=i-1 ; j>=0 && list[j] > key ; j--) //list[j]>key -> key������ ũ�ϰ� �ڷ� �̵�
			//j=i-1���� ���� : list[i]�� key�� ���̴ϰ�(i�� ��ġ), i-1�� j���� �˻��ϴ���. 
			list[j+1]=list[j]; //key���� ū ���� ��(������)�� ��ĭ �̵�
		list[j+1]=key; // j���� ���ؼ� �� ū�� ������ j+1�� �״�� ����
		//key�� ��� ������ Ŀ�� �� for���� ���� ���, j+1�� �ڸ��� �״�� ����
		//j+1�� i�̱⿡ i���� �״�� key�� ���� 
	}
		/*
	ù��° for���� i=1�� ������, ���ԵǴ� ���� ó���� 1�� index�� ���⶧��.
	�װͰ� ���� �ι�° for���� j=j-i�� ����!
	�տ��ִ� �Ͱ� ũ�⸦ ���ؾ��ϴϰ�!
	*/
}

//�������� 
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
		if (!bChanged) break; //��ȯ�� ������ ����
	}
	/*
	�ڿ��� ���� �Ϸ��� ����Ʈ�� �ִ°ű⿡, ù��° for�� i=n-1�̴�.
	�ι�° for�� �տ������� ũ�� ���ϴϰ� j=0!
	*/
}

//��������  
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
void merge_sort(int list[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2; //�յ� ����
		merge_sort(list, left, mid); //�κ� ����Ʈ ����
		merge_sort(list, mid + 1, right); //�κ� ����Ʈ ����
		merge(list, left, mid, right); //����
	}
}

//������
int partition(int list[], int left, int right) {
	int tmp;
	int low = left + 1; //���������� ������Ŵ
	int high = right; //�������� ���ҽ�Ŵ
	int pivot = list[left]; //���� ���ʵ����͸� �ǹ� ����
	while (low < high) { // low�� high ��������(��������) �ʴ� �� �ݺ�
		for (; low <= right && list[low] < pivot; low++); //list[low]�� pivot���� ũ�� ����
		for (; high >= left && list[high] > pivot; high--); //list[high]�� pivot���� ������ ����
		if (low < high) //low�� high�� ���� �������� ���� ���, for�� �ΰ����� ���õ� �� ���ڵ� ��ȯ
			SWAP(list[low], list[high], tmp);
	}
	SWAP(list[left], list[high], tmp); //high�� �ǹ� ��ġ�� �׸� ��ȯ = �ǹ��� �߾ӿ� ��ġ��Ŵ
	return high; //�ǹ� ��ġ�� ��ȯ, �ǹ��� ���� high�� ��ġ������
}
void quick_sort(int list[], int left, int right) {
	int q;
	if (left < right) { //���� ������ 2�� �̻��� ���
		q = partition(list, left, right); //�¿�� ����
		quick_sort(list, left, q - 1); //���ʸ���Ʈ �� ���� //(��ȯ)
		quick_sort(list, q + 1, right); //�����ʸ���Ʈ �� ���� //(��ȯ)
	}
}

//������
//gap ��ŭ ������ ��ҵ��� ���� ����, ������ ������ first���� last 
void sortGapInsertion(int list[],int first, int last, int gap){
	int i,j,key;
	for(i=first+gap ; i<=last ; i=i+gap){
	//i=gap���ۺκ�+gap ; last������ ���� ; �ٽ� i�� gap���ؼ� �Ʒ��ڵ� ���� 
		key=list[i];
		for(j=i-gap;j>=first && key<list[j];j=j-gap)
			list[j+gap]=list[j];
		list[j+gap]=key; 
	}
}
//�� ���� �˰����� �̿��� int �迭�� ������������ ����
void shell_sort(int list[], int n){
	int i,gap,count=0;
	for(gap=n/2;gap>0;gap=gap/2){ //1��->k=5, 2��->k=3, 3��->k=1, ������Ǯ��
		if((gap%2)==0) gap++; //gap�� ¦���̸� 1�� ����, gap�� �ظ��ϸ� Ȧ���� �ϸ� ����  
		for(i=0;i<gap;i++) //�κ� ����Ʈ�� ������ gap 
			sortGapInsertion(list,i,n-1,gap); //n-1 -> �ε��� ������(0~8)  
	}
} 
 
