#include <stdio.h>
#include <time.h>

int d[100];

int fibo(int x){
	if(x==1) return d[x]=1;
	if(x==2) return d[x]=1;
	return d[x]=fibo(x-1)+fibo(x-2);
}

int main(){

    clock_t start = clock(); // ���� �ð� ����
    
    fibo(50);

    clock_t end = clock(); // �ڵ尡 ���� �ð� ����

    // ����: ��(second), CLOCKS_PER_SEC�� ������� �ʴ����� ���´� 
    printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
    
    for(int i=0;i<50L;i++){
    	printf("%d��° = %d \n", i+1, d[i]);
	}
	
    return 0;
}
