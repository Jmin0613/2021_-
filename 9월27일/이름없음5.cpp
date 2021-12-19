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

void selection_sort(int list[],int n){
	int i,j,least,tmp; //least -> ������(�ε���) ����, tmp->SWAP���� ��ȯ���� 
	for(i=0;i<n;i++){
		least=i;
		for(j=i+1;j<n;j++) //����x�� �κп��� ������ ã��, �ּҰ� Ž�� 
			if(list[j]<list[least]) least=j; //������ �����ؼ� ���� 
		SWAP(list[i],list[least],tmp); //�迭 �׸� ��ȯ
		printStep(list,n,i+1);
		/*
		list[i]�� list[least] �ּҰ��� ��.
		list�� ���� ���ʸ���Ʈ�̴�, ���� ���� ���ڰ� �����ΰ��� �������� ����Ȱ���
		�̸� �ݺ�!
		ù for���� ;n-1; �ΰ��� list�� ��Ұ����� 9���̱⿡ 8���� �ص��Ǽ� n-1�� ����
		�ι�° for���� ;j<n; �� ��ü��Ҹ� �˻��ؾ��ϱ⿡ j<n�� ����
		*/
	}
}

int main() {
	int list[9] = { 5,3,8,4,9,1,6,2,7 };
	printfArray(list, 9, "Original "); //���� �� 
	selection_sort(list,8);
	printfArray(list, 9, "Selection "); //���� ��  

	return 0;
} 

