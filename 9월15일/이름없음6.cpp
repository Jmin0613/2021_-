#include <stdio.h>
#include <time.h>
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

int partition(int list[], int left, int right) {
	int tmp;
	int low = left + 1;
	int high = right;
	int pivot = list[left]; //�ǹ� ����
	while (low < high) { // low�� high ��������(��������) �ʴ� �� �ݺ�
		for (; low <= right && list[low] < pivot; low++);
		for (; high >= left && list[high] > pivot; high--);
		if (low < high) //���õ� �� ���ڵ� ��ȯ
			SWAP(list[low], list[high], tmp);
	}
	SWAP(list[left], list[high], tmp); //high�� �ǹ� ��ȯ
	return high;
}

void quick_sort(int list[], int left, int right) {
	int q;
	if (left < right) { //���� ������ 2�� �̻��� ���
		q = partition(list, left, right); //�¿�� ����
		quick_sort(list, left, q - 1); //���ʸ���Ʈ �� ����
		quick_sort(list, q + 1, right); //�����ʸ���Ʈ �� ����
	}
}


int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	
	clock_t start = clock(); // ���� �ð� ����
	quick_sort(list,0,8);
	clock_t end = clock(); // �ڵ尡 ���� �ð� ����

	printfArray(list, 9, "Selection "); //���� ��  
	printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

	return 0;
} 

