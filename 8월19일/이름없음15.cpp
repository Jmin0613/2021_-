//���ڿ� ��ġ�� �Լ�
#include <stdio.h>

int stradd(char *dest, char *src);

int main(){
	char str1[100]="hello my name is ";
	char str2[]="Psi";
	
	printf("��ġ�� ���� : %s \n", str1);
	
	stradd(str1, str2);
	
	printf("��ģ ���� : %s \n", str1);
	
	reutrn 0;
} 

int stradd(char *dest, char *src){
	while(*dest){
		dest++;
	}
	
	//dest�� NULL�� ����Ŵ
	while(*src){
		*dest=*src;
		src++;
		dest++;
	} 
	
	*dest='\0';
	
	return 1; 
}
