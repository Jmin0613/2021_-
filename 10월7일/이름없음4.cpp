#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//점의 좌표를 저장할 구조체 생성
struct points{
	int x, y;
}; 

points* minPairs = NULL; //최근접점을 저장할 변수 
double min = -1; //최근접점 거리  

//작은 값 리턴
double minNum(double a, double b){
	if(a<b)
		return a;
	else
		return b;
}

// 배열에 담긴 점들을 출력하는 함수
void printPoint(points* pair, int size){
	for(int i=0;i<size;i++){
		printf("(%d, %d)\n", (pair+i)->x, (pair+i)->y);
	}printf("\n");
}

// 거리 계산 및 최근접 점 간 거리와 비교
double Distance(points*a, points*b){
	double dist;
	
	dist=sqrt(pow(a->x - b->x, 2) + pow(a->y - b->.y, 2)); //거리계산 
	
	if(min == -1 || distance<min){ //계산한 거리가 최소값인 경우  
		*minPairs=*a;
		*(minPairs +1)=*b;
		min = dist;
	} return dist;
}

//최근접 점 구하기 
double ClosestPair(points* pairs, int left, int right, int size){
	
} 
//DC정렬로 넘기기  
void  FindClosestPsirDC(points* pairs, int left, int right){
	
}


int main(){
	int n;
	points* pairs = NULL; //점 입력받을 변수 
	int i;
	
	//좌표 개수 입력 
	printf("좌표축의 범위는 x,y 모두 0~99까지\n");
	printf("되도록 100개 이하로 입력.\n"); 
	printf("좌표의 개수 입력 : ");
	scanf("%d", &n);
	
	//입력받은 수 만큼 동적 할당 
	//좌표를 저장할 구조체를 입력한 크기만큼 생성 
	pairs=(points*)malloc(sizeof(points)*n); 
	
	//최근접쌍을 저장하기 위해 동적 할당
	minPairs=(points*)malloc(sizeof(points)*2); //2개 
	
	// 좌표 난수로 생성 
	for(int i=0;i<n;i++){
		(pairs+i)->x =rand()%100; //양수좌표, 0~99꺼지 x 범위  
		(pairs+i)->y =rand()%100; //양수좌표, 0~99까지 y 범위  
	}
	
	//생성된 좌표 보여주기 
	printPoint(pairs, n); 
	
	printf("최근접 거리 : %lf\n");
	printf("최근접 점 : (%d, %d)와 (%d, %d)\n", (minPairs+i)->x, (minPairs+i)->y);
	
	//할당한 메모리 해제  
	free(pairs);
	free(minPairs);
	
	
} 


