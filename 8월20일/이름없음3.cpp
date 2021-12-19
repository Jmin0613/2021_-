#include <stdio.h>

struct Books{
	char name[30];
	char auth[30];
	char publ[30];
	int borrowed;
}; 

int main(){
	struct Books book_list[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Ã¥ %d Á¤º¸ ÀÔ·Â : ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed=0;
	}
	
	for(i=0;i<3;i++){
		printf("------------------------------\n");
		printf("Ã¥ %sÀÇ Á¤º¸\n", book_list[i].name);
		printf("ÀúÀÚ :%s \n", book_list[i].auth);
		printf("ÃâÆÇ»ç : %s \n", book_list[i].publ);
		
		if (book_list[i].borrowed==0){
			printf("¾È ºô·ÁÁü\n");
		} else{
			printf("ºô·ÁÁü\n");
		}
	}
	return 0;
}
