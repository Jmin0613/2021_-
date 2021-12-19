#include <stdio.h>
#define SWAP(x,y,t)	((t)=(x),(x)=(y),(y)=(t))

void seletion_sort(int list[], int n);
void insertion_sort(int list[], int n);

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

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	seletion_sort(list, 9);
	printfArray(list, 9, "Selection "); //���� ��  

	return 0;
} 

void seletion_sort(int list[], int n) {
	int i, j, tmp, least;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) //�ּҰ� Ž��
			if (list[j] < list[least]) least = j;
		SWAP(list[i], list[least], tmp); //�迭 �׸� ��ȯ
		printStep(list, n, i + 1);
		/*
		list[i]�� list[least] �ּҰ��� ��.
		list�� ���� ���ʸ���Ʈ�̴�, ���� ���� ���ڰ� �����ΰ��� �������� ����Ȱ���
		�̸� �ݺ�!
		ù for���� ;n-1; �ΰ��� list�� ��Ұ����� 9���̱⿡ 8���� �ص��Ǽ� n-1�� ����
		�ι�° for���� ;j<n; �� ��ü��Ҹ� �˻��ؾ��ϱ⿡ j<n�� ����
		*/
	}
}

void insertion_sort(int list[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j]; //���������� �̵�
		list[j + 1] = key; // j���� ���ؼ� �� ū�� ������ j+1�� �״�� ����
		printStep(list, n, i);
	}
	/*
	ù��° for���� i=1�� ������, ���ԵǴ� ���� ó���� 1�� index�� ���⶧��.
	�װͰ� ���� �ι�° for���� j=j-i�� ����!
	�տ��ִ� �Ͱ� ũ�⸦ ���ؾ��ϴϰ�!
	*/
}
