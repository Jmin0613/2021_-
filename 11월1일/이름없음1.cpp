#include <stdio.h>
#include <time.h>

int d[100];

int fibo(int x){
	if(x==1) return d[x]=1;
	if(x==2) return d[x]=1;
	return d[x]=fibo(x-1)+fibo(x-2);
}

int main(){

    clock_t start = clock(); // 시작 시간 저장
    
    fibo(50);

    clock_t end = clock(); // 코드가 끝난 시간 저장

    // 단위: 초(second), CLOCKS_PER_SEC로 나눠줘야 초단위로 나온다 
    printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
    
    for(int i=0;i<50L;i++){
    	printf("%d번째 = %d \n", i+1, d[i]);
	}
	
    return 0;
}
