#include <stdio.h>

int itemCnt=0;
int money=100;

int buyItem(int cost){
	if(money<cost){
		return -1;
	}
	
	itemCnt++;
	money-=cost;
	printf("아이템을 구매했습니다.\n");
	printf("	아이템 개수 : %d\n",itemCnt);
	printf("	잔액 : %d\n",money);
	return 0;
}
int main(){
	buyItem(50);
	int result=buyItem(70);
	
	if(result==-1){
		printf("잔액이 부족합니다.\n");
		printf("	아이템 개수 : %d\n",itemCnt);
		printf("	잔액 : %d\n",money);
	}
}
