#include <stdio.h>
//#include "ArrayList.h"

void ListInit(List*plist){
	(plist -> numOfData)=0;
	(plist -> curPosition) =-1;
}

void LInsert(List * plist, LData data){
	if(plist->numOfData >= LIST_LEN){ //������ ������ ���̺��� ũ�� -> �� ���� 
		puts("������ �Ұ����մϴ�.");
		return;
	}
	
	//�װ� �ƴϸ�
	plist->arr[plist->numOfData]=data; //plist�� �ִ� arr[������ ��ġ]�� data����
	(plist->numOfData)++; //�ϳ� ���������� ���� �� 
}

int LFirst(List*plist, LData*pdata){
	if(plist->numOfData==0) //�ƹ��͵� ����x
		return false;
	
	(plist -> curPosition)=0; //ó������ �缳�����ֱ� 
	*pdata = plist->arr[0]; 
	return TRUE;
}

`int LNext(List*plist, LData*pdata){
	if(plist->curPosition >= (plist->numOfData)-1) //���ѷ���Ż��(���̻� ������ ������x) 
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
