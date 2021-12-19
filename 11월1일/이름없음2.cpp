#include <stdio.h>
#include <time.h>

long d[100];

long fiboDP(long x){
	if(x==1) return d[x]=1;
	if(x==2) return d[x]=1;
	if(d[x]!=0) return d[x];
	return d[x]=fiboDP(x-1)+fiboDP(x-2);
}

int main(){

    clock_t start = clock(); // 시작 시간 저장
    
    fiboDP(50);

    clock_t end = clock(); // 코드가 끝난 시간 저장

    // 단위: 초(second), CLOCKS_PER_SEC로 나눠줘야 초단위로 나온다 
    printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
    
    for(int i=1;i<=50;i++){
    	printf("%d = %d \n", i, d[i]);
	}
    return 0;
}
