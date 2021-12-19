#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/* 구조체 타입 선언 */
typedef struct
{
    int x;
    int y;
} coord;
 
coord* minPairs = NULL; // 최근접점 저장 변수
double min = -1; // 최근접점 거리
 
/* 작은 값 리턴 */
double minNum(double a, double b)
{
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
 
/* 배열에 담긴 점들을 출력하는 함수 */
void printPoint(coord* pair, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("(%d, %d)\n", (pair + i)->x, (pair + i)->y);
    }
    printf("\n");
}
 
/* 거리 계산 및 최접점 간 거리와 비교 */
double measureDistance(coord* a, coord* b)
{
    double distance;
 
    /* 거리 계산 */
    distance = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));
 
    /* 만약에 계산된 거리가 최소값인 경우,  */
    /* 최근접점 정보를 갱신 */
    /* 2,3쌍으로 구성된 문제에서 결정된 최소 사이즈가 */
    /* 최종 결과값인 경우에 대한 처리 부분 */
    if (min == -1 || distance < min)
    {
        *minPairs = *a;
        *(minPairs + 1) = *b;
        min = distance;
    }
    return distance;
}
 
/* 최접점을 구하는 함수 */
double ClosestPair(coord* pairs, int left, int right, int size)
{
    /* 부분 문제 출력 */
    printf("<<<부분 문제>>>\n");
    printPoint(pairs + left, size);
 
    /* 2쌍 */
    if (size == 2)
    {
        return measureDistance(pairs + left, pairs + right);
    }
    /* 3쌍 */
    else if (size == 3)
    {
        double distance1, distance2, distance3, min;
        distance1 = measureDistance(pairs, pairs + 1);
        distance2 = measureDistance(pairs + 1, pairs + 2);
        distance3 = measureDistance(pairs + 2, pairs);
 
        /* 최소값 리턴 */
        min = minNum(distance1, distance2);
        min = minNum(distance3, min);
        return min;
    }
    /* 4쌍 이상, 분할 작업 */
    else
    {
        /* 분할을 위한 중앙 인덱스 설정 */
        int mid = (left + right) / 2;
 
        /* 거리 범위, CPr, CPl에 대한 선언 */
        double distanceRange;
        double CPright, CPleft;
 
        /* 분할 시 최접점 거리 후보로 두고, 이를 범위로 잡음 */
        /* CPl, CPr 탐색 */
        CPleft = ClosestPair(pairs, left, mid, mid - left + 1);
        CPright = ClosestPair(pairs, mid + 1, right, right - mid);
        distanceRange = minNum(CPleft, CPright);
 
        /* CPl, CPr 출력 */
        printf("CPleft : %lf, ", CPleft);
        printf("CPright : %lf\n\n", CPright);
        
 
        /* 임시 저장 변수 동적 할당 */
        coord* pairsTmp = (coord*)malloc(sizeof(coord)*size);
        int cnt = 0;
 
        /* 부분 최소값 */
        double minSub = -1;
 
        /* 범위 내에 들어 있는 점들 임시 저장 */
        for (int i = left; i <= right; i++)
        {
            if (abs((pairs + i)->x - (pairs + mid)->x) < distanceRange)
            {
                (pairsTmp + cnt)->x = (pairs + i)->x;
                (pairsTmp + cnt)->y = (pairs + i)->y;
                cnt++;
            }
        }
 
        /* 범위 내 점들 출력 */
        printf("<< 범위 >>\n");
        printf("distanceRange : %lf\n", distanceRange);
        printPoint(pairsTmp, cnt);
 
        /* CPc 탐색 */
        for (int i = 0; i < cnt; i++)
        {
            for (int j = i + 1; j < cnt; j++)
            {
                /* 범위 거리와 범위 내 최단 거리 간 비교 */
                /* CPc와 범위 거리 비교해서 범위 거리 갱신 */
                minSub = minNum(distanceRange, measureDistance(pairsTmp + i, pairsTmp + j));
 
                /* 부분 최근접 거리가 설정된 범위보다 좁을 경우, 정보 복사 */
                if (minSub < distanceRange)
                {
                    /* distanceRange(CPl or CPr)보다 작은 거리값이 존재한다면, */
                    /* 이를 갱신해서 좀 더 빠르게 범위를 좁혀나갈 수 있음 */
                    /* 이 과정을 거친 distanceRange가 이 부분 문제의 최근접 거리 */
                    distanceRange = minSub;
                    if (minSub<min)
                    {
                        *minPairs = *(pairsTmp + i);
                        *(minPairs + 1) = *(pairsTmp + j);
                    }
                }
            }
        }
 
        /* CPc 출력 */
        if (minSub == -1)
        {
            printf("범위 내 CPc가 존재하지 않습니다.\n");
        }
        else
        {
            printf("CPc : %lf\n\n", minSub);
        }
        
        /* 동적 할당된 메모리 해제 */
        free(pairsTmp);
        
        /* 최근접 거리 리턴 */
        return distanceRange;
    }
}
 
/* 퀵정렬을 위한 비교 함수 */
int coordCompare(const void* a, const void* b)
{
    const coord *m, *n;
    m = (const coord*)a;
    n = (const coord*)b;
 
    if (m->x > n->x)
    {
        return 1;
    }
    else if (m->x == n->x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
 
int main(void)
{
    int n; // 입력 케이스 크기
    coord* pairs = NULL; // 점을 입력 받는 변수
    int i;
 
    /* 좌표 개수 입력 */
    printf("입력할 좌표의 개수 : ");
    scanf("%d", &n);
 
    /* 입력 받은 좌표 개수 토대로 동적 할당 */
    pairs = (coord*)malloc(sizeof(coord)*n);
    /* 최접점쌍을 저장하기 위해 동적 할당 */
    minPairs = (coord*)malloc(sizeof(coord) * 2);
 
    /* 좌표 입력 */
    for (i = 0; i<n; i++)
    {
        scanf("%d%d", &(pairs + i)->x, &(pairs + i)->y);
    }
 
    /* 퀵정렬 */
    qsort(pairs, (size_t)n, sizeof(coord), coordCompare);
 
    printf("<<정렬 결과>>\n");
    printPoint(pairs, n);
 
    /* 최근접점 결과값 출력 */
    printf("최근접 거리 : %lf\n", ClosestPair(pairs, 0, n - 1, n));
    printf("<<최근접점>>\n");
    for (int i = 0; i < 2; i++)
    {
        printf("(%d, %d)\n", (minPairs + i)->x, (minPairs + i)->y);
    }
 
    /* 동적 할당된 메모리 해제 */
    free(pairs);
    free(minPairs);
    return 0;
}


