#include <stdio.h>

int main(){
	int i, k=0, m, n, dec;
	char c_hex[]="0123456789ABCDEF";
	char hex[10]={0};
	
	printf("10������ �Է��ϼ��� : ");
	scanf("%d", &dec);
	printf("������ : %d, 16���� : ", dec);
	
	while(1){
		m=dec/16; //16���� ���� �� 
		n=dec-(m*16); //������ 
		hex[k++]=c_hex[n];
		if(m<=0) break;
		dec=m; 
	}
	
	for (i=k-1;i>=0;i--){
		printf("%c", hex[i]);
	}
	
	printf("\n");
	return 0;
}
