#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//���� ��ǥ�� ������ ����ü ����
struct points{
	int x, y;
}; 

points* minPairs = NULL; //�ֱ������� ������ ���� 
double min = -1; //�ֱ����� �Ÿ�  

//���� �� ����
double minNum(double a, double b){
	if(a<b)
		return a;
	else
		return b;
}

// �迭�� ��� ������ ����ϴ� �Լ�
void printPoint(points* pair, int size){
	for(int i=0;i<size;i++){
		printf("(%d, %d)\n", (pair+i)->x, (pair+i)->y);
	}printf("\n");
}

// �Ÿ� ��� �� �ֱ��� �� �� �Ÿ��� ��
double Distance(points*a, points*b){
	double dist;
	
	dist=sqrt(pow(a->x - b->x, 2) + pow(a->y - b->.y, 2)); //�Ÿ���� 
	
	if(min == -1 || distance<min){ //����� �Ÿ��� �ּҰ��� ���  
		*minPairs=*a;
		*(minPairs +1)=*b;
		min = dist;
	} return dist;
}

//�ֱ��� �� ���ϱ� 
double ClosestPair(points* pairs, int left, int right, int size){
	
} 
//DC���ķ� �ѱ��  
void  FindClosestPsirDC(points* pairs, int left, int right){
	
}


int main(){
	int n;
	points* pairs = NULL; //�� �Է¹��� ���� 
	int i;
	
	//��ǥ ���� �Է� 
	printf("��ǥ���� ������ x,y ��� 0~99����\n");
	printf("�ǵ��� 100�� ���Ϸ� �Է�.\n"); 
	printf("��ǥ�� ���� �Է� : ");
	scanf("%d", &n);
	
	//�Է¹��� �� ��ŭ ���� �Ҵ� 
	//��ǥ�� ������ ����ü�� �Է��� ũ�⸸ŭ ���� 
	pairs=(points*)malloc(sizeof(points)*n); 
	
	//�ֱ������� �����ϱ� ���� ���� �Ҵ�
	minPairs=(points*)malloc(sizeof(points)*2); //2�� 
	
	// ��ǥ ������ ���� 
	for(int i=0;i<n;i++){
		(pairs+i)->x =rand()%100; //�����ǥ, 0~99���� x ����  
		(pairs+i)->y =rand()%100; //�����ǥ, 0~99���� y ����  
	}
	
	//������ ��ǥ �����ֱ� 
	printPoint(pairs, n); 
	
	printf("�ֱ��� �Ÿ� : %lf\n");
	printf("�ֱ��� �� : (%d, %d)�� (%d, %d)\n", (minPairs+i)->x, (minPairs+i)->y);
	
	//�Ҵ��� �޸� ����  
	free(pairs);
	free(minPairs);
	
	
} 


