#include <stdio.h>
#include <time.h>

int main(){

    clock_t start = clock(); // ���� �ð� ����
    
    // ......(�����Ϸ��� �ڵ�)

    clock_t end = clock(); // �ڵ尡 ���� �ð� ����

    // ����: ��(second), CLOCKS_PER_SEC�� ������� �ʴ����� ���´� 
    printf("������ �ð� : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}

