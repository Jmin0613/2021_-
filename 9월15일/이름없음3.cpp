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
		printStep(list, n, n - i);
	}
	/*
	�ڿ��� ���� �Ϸ��� ����Ʈ�� �ִ°ű⿡, ù��° for�� i=n-1�̴�.
	�ι�° for�� �տ������� ũ�� ���ϴϰ� j=0!
	*/
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	
	clock_t start = clock(); //����  
	bubble_sort(list, 9);
	clock_t end = clock(); //��  
	
	printfArray(list, 9, "Selection "); //���� ��
	
	printf("�ɸ��ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);  

	return 0;
}

