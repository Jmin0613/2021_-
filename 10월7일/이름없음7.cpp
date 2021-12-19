#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/* ����ü Ÿ�� ���� */
typedef struct
{
    int x;
    int y;
} coord;
 
coord* minPairs = NULL; // �ֱ����� ���� ����
double min = -1; // �ֱ����� �Ÿ�
 
/* ���� �� ���� */
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
 
/* �迭�� ��� ������ ����ϴ� �Լ� */
void printPoint(coord* pair, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("(%d, %d)\n", (pair + i)->x, (pair + i)->y);
    }
    printf("\n");
}
 
/* �Ÿ� ��� �� ������ �� �Ÿ��� �� */
double measureDistance(coord* a, coord* b)
{
    double distance;
 
    /* �Ÿ� ��� */
    distance = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));
 
    /* ���࿡ ���� �Ÿ��� �ּҰ��� ���,  */
    /* �ֱ����� ������ ���� */
    /* 2,3������ ������ �������� ������ �ּ� ����� */
    /* ���� ������� ��쿡 ���� ó�� �κ� */
    if (min == -1 || distance < min)
    {
        *minPairs = *a;
        *(minPairs + 1) = *b;
        min = distance;
    }
    return distance;
}
 
/* �������� ���ϴ� �Լ� */
double ClosestPair(coord* pairs, int left, int right, int size)
{
    /* �κ� ���� ��� */
    printf("<<<�κ� ����>>>\n");
    printPoint(pairs + left, size);
 
    /* 2�� */
    if (size == 2)
    {
        return measureDistance(pairs + left, pairs + right);
    }
    /* 3�� */
    else if (size == 3)
    {
        double distance1, distance2, distance3, min;
        distance1 = measureDistance(pairs, pairs + 1);
        distance2 = measureDistance(pairs + 1, pairs + 2);
        distance3 = measureDistance(pairs + 2, pairs);
 
        /* �ּҰ� ���� */
        min = minNum(distance1, distance2);
        min = minNum(distance3, min);
        return min;
    }
    /* 4�� �̻�, ���� �۾� */
    else
    {
        /* ������ ���� �߾� �ε��� ���� */
        int mid = (left + right) / 2;
 
        /* �Ÿ� ����, CPr, CPl�� ���� ���� */
        double distanceRange;
        double CPright, CPleft;
 
        /* ���� �� ������ �Ÿ� �ĺ��� �ΰ�, �̸� ������ ���� */
        /* CPl, CPr Ž�� */
        CPleft = ClosestPair(pairs, left, mid, mid - left + 1);
        CPright = ClosestPair(pairs, mid + 1, right, right - mid);
        distanceRange = minNum(CPleft, CPright);
 
        /* CPl, CPr ��� */
        printf("CPleft : %lf, ", CPleft);
        printf("CPright : %lf\n\n", CPright);
        
 
        /* �ӽ� ���� ���� ���� �Ҵ� */
        coord* pairsTmp = (coord*)malloc(sizeof(coord)*size);
        int cnt = 0;
 
        /* �κ� �ּҰ� */
        double minSub = -1;
 
        /* ���� ���� ��� �ִ� ���� �ӽ� ���� */
        for (int i = left; i <= right; i++)
        {
            if (abs((pairs + i)->x - (pairs + mid)->x) < distanceRange)
            {
                (pairsTmp + cnt)->x = (pairs + i)->x;
                (pairsTmp + cnt)->y = (pairs + i)->y;
                cnt++;
            }
        }
 
        /* ���� �� ���� ��� */
        printf("<< ���� >>\n");
        printf("distanceRange : %lf\n", distanceRange);
        printPoint(pairsTmp, cnt);
 
        /* CPc Ž�� */
        for (int i = 0; i < cnt; i++)
        {
            for (int j = i + 1; j < cnt; j++)
            {
                /* ���� �Ÿ��� ���� �� �ִ� �Ÿ� �� �� */
                /* CPc�� ���� �Ÿ� ���ؼ� ���� �Ÿ� ���� */
                minSub = minNum(distanceRange, measureDistance(pairsTmp + i, pairsTmp + j));
 
                /* �κ� �ֱ��� �Ÿ��� ������ �������� ���� ���, ���� ���� */
                if (minSub < distanceRange)
                {
                    /* distanceRange(CPl or CPr)���� ���� �Ÿ����� �����Ѵٸ�, */
                    /* �̸� �����ؼ� �� �� ������ ������ �������� �� ���� */
                    /* �� ������ ��ģ distanceRange�� �� �κ� ������ �ֱ��� �Ÿ� */
                    distanceRange = minSub;
                    if (minSub<min)
                    {
                        *minPairs = *(pairsTmp + i);
                        *(minPairs + 1) = *(pairsTmp + j);
                    }
                }
            }
        }
 
        /* CPc ��� */
        if (minSub == -1)
        {
            printf("���� �� CPc�� �������� �ʽ��ϴ�.\n");
        }
        else
        {
            printf("CPc : %lf\n\n", minSub);
        }
        
        /* ���� �Ҵ�� �޸� ���� */
        free(pairsTmp);
        
        /* �ֱ��� �Ÿ� ���� */
        return distanceRange;
    }
}
 
/* �������� ���� �� �Լ� */
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
    int n; // �Է� ���̽� ũ��
    coord* pairs = NULL; // ���� �Է� �޴� ����
    int i;
 
    /* ��ǥ ���� �Է� */
    printf("�Է��� ��ǥ�� ���� : ");
    scanf("%d", &n);
 
    /* �Է� ���� ��ǥ ���� ���� ���� �Ҵ� */
    pairs = (coord*)malloc(sizeof(coord)*n);
    /* ���������� �����ϱ� ���� ���� �Ҵ� */
    minPairs = (coord*)malloc(sizeof(coord) * 2);
 
    /* ��ǥ �Է� */
    for (i = 0; i<n; i++)
    {
        scanf("%d%d", &(pairs + i)->x, &(pairs + i)->y);
    }
 
    /* ������ */
    qsort(pairs, (size_t)n, sizeof(coord), coordCompare);
 
    printf("<<���� ���>>\n");
    printPoint(pairs, n);
 
    /* �ֱ����� ����� ��� */
    printf("�ֱ��� �Ÿ� : %lf\n", ClosestPair(pairs, 0, n - 1, n));
    printf("<<�ֱ�����>>\n");
    for (int i = 0; i < 2; i++)
    {
        printf("(%d, %d)\n", (minPairs + i)->x, (minPairs + i)->y);
    }
 
    /* ���� �Ҵ�� �޸� ���� */
    free(pairs);
    free(minPairs);
    return 0;
}


