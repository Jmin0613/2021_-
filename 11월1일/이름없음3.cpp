#include <stdio.h>
#include <time.h>

long d[100];

long TileDP(long x){
	if(x==1) return d[x]=1;
	if(x==2) return d[x]=2;
	if(d[x]!=0) return d[x];
	return d[x]=TileDP(x-1)+TileDP(x-2);
}

int main(){

    clock_t start = clock(); // ���� �ð� ����
    
    TileDP(30);

    clock_t end = clock(); // �ڵ尡 ���� �ð� ����

    // ����: ��(second), CLOCKS_PER_SEC�� ������� �ʴ����� ���´� 
    printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	
	for(int i=1;i<=30;i++){
    	printf("%d��° = %ld \n", i, d[i]);
	}
	
    return 0;
}
