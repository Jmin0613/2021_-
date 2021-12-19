#include <stdio.h>
#include <time.h>

int main(){

    clock_t start = clock(); // 시작 시간 저장
    
    // ......(측정하려는 코드)

    clock_t end = clock(); // 코드가 끝난 시간 저장

    // 단위: 초(second), CLOCKS_PER_SEC로 나눠줘야 초단위로 나온다 
    printf("측정된 시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}

