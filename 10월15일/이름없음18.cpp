#include <stdio.h>

int main(){
	int a,b,sum=0;
	int arr[10][10];
	
	printf("10x10 이하의 2차원 배열을 입력받을 것...\n");
	printf("행과 열 입력 : ");
	scanf("%d %d",&a,&b);
	
	printf("\n각 배열의 값을 입력...\n");
	for(int i=0;i<a;i++){
		printf("%d번째 행의 값 입력 : ",i+1);
		for(int j=0;j<b;j++)
			scanf("%d",&arr[i][j]); 
	}
	
	printf("\n각 행 요소의 합 출력...\n");
	for(int i=0;i<a;i++){
		sum=0;
		for(int j=0;j<b;j++)
			sum+=arr[i][j];
		printf("%d번째 행 요소의 합 : %d\n",i+1,sum);
	}
	
	return 0;
}
