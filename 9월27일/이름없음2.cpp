#include <stdio.h>

int main(){
	int arr[10];
	int f_sum;
	int s_sum;
	
	for(int i=0;i<10;i++){
		printf("%d��° �Է�: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<10;i++){
		if(i%2!=0){
			f_sum+=arr[i];
		}
	}
	
	for(int i=0;i<10;i++){
		if(arr[i]%2!=0){
			s_sum+=arr[i];
		}
	}
	
	printf("Ȧ�� �ε��� �� : %d\n", f_sum);
	printf("����� Ȧ�� �� �� : %d\n", s_sum);
	return 0;
}
