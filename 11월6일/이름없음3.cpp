#include <stdio.h>
//#include "ArrayList.h"

void ListInit(List*plist){
	(plist -> numOfData)=0;
	(plist -> curPosition) =-1;
}

void LInsert(List * plist, LData data){
	if(plist->numOfData >= LIST_LEN){ //저장한 갯수가 길이보다 크다 -> 꽉 찻다 
		puts("저장이 불가능합니다.");
		return;
	}
	
	//그게 아니면
	plist->arr[plist->numOfData]=data; //plist에 있는 arr[저장할 위치]에 data삽입
	(plist->numOfData)++; //하나 저장했으니 갯수 업 
}

int LFirst(List*plist, LData*pdata){
	if(plist->numOfData==0) //아무것도 저장x
		return false;
	
	(plist -> curPosition)=0; //처음으로 재설정해주기 
	*pdata = plist->arr[0]; 
	return TRUE;
}

`int LNext(List*plist, LData*pdata){
	if(plist->curPosition >= (plist->numOfData)-1) //무한루프탈출(더이상 참조할 데이터x) 
		return FALSE;
		
	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition]; 
	return TRUE;
}

LData LRemove(List*plist){
	int rpos=plist->curPosition;
	int num=plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];
	
	for(i=rpos;i<num-1;i++)
		plist->arr[i]=plist->arr[i+1];
		
	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}
