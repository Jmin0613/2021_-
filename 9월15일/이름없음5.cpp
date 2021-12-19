#include <stdio.h>
#define MAX_SIZE 1024 
#include <time.h>

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
		sorted[k++] = (list[i] <= list[j] ? list[i++] : list[j++]);

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
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	
	clock_t start = clock(); // ���� �ð� ����
	merge_sort(list, 0,8);
	clock_t end = clock(); // �ڵ尡 ���� �ð� ����

	printfArray(list, 9, "Selection "); //���� �� 
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC); 

	return 0;
}

