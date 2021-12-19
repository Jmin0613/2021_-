#include <stdio.h>
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
		printStep(list,n,i);
	}
		/*
	ù��° for���� i=1�� ������, ���ԵǴ� ���� ó���� 1�� index�� ���⶧��.
	�װͰ� ���� �ι�° for���� j=j-i�� ����!
	�տ��ִ� �Ͱ� ũ�⸦ ���ؾ��ϴϰ�!
	*/
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	insertion_sort(list,8);
	printfArray(list, 9, "Selection "); //���� ��  

	return 0;
} 

