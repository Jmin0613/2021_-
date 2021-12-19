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
	for(gap=n/2;gap>0;gap=gap/2){
		if((gap%2)==0) gap++; //gap�� ¦���̸� 1�� ����, gap�� �ظ��ϸ� Ȧ���� �ϸ� ����  
		for(i=0;i<gap;i++)//�κ� ����Ʈ�� ������ gap 
			sortGapInsertion(list,i,n-1,gap);
		printStep(list, n, ++count); //�߰� ���� ��¿� ����  
	}
} 

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	shell_sort(list,8);
	printfArray(list, 9, "Selection "); //���� ��  

	return 0;
} 

