#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

#define MAX 10000
#define MAX_SIZE 1024
#define SWAP(x,y,t)	((t)=(x),(x)=(y),(y)=(t))

void printfArray(int arr[], int n, char* str) { //�����ֱ� 
	printf("%s = ", str);
	for (int i = 0; i < n; i++) printf("%3d", arr[i]);
	printf("\n");
}

void printStep(int arr[], int n, int val) { //step ���� ������
	int i;
	printf("	step %2d = ", val);
	for (i = 0; i < n; i++) printf("%3d", arr[i]);
	printf("\n");
}

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

int main() {
	int size;
	printf("�迭�� ũ�� �Է� : ");
	scanf("%d", &size);
	
	int *list = (int*)malloc(sizeof(int)*size);
	
	for(int i=0;i<size;i++)
		list[i]=(rand()%MAX+1);
	printfArray(list, 9, "Original "); //���� �� 
	printf("\n�պ� ���� �ð����� ����\n");
	clock_t start = clock();
	merge_sort(list, 0,8);
	clock_t end = clock();
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	printfArray(list, 9, "Selection "); //���� ��  	
	
	free(list);


	return 0;
}

