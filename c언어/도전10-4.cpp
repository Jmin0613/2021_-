#include <stdio.h>

int main(){
	int money=3500;
	int cream=500;
	int shirim=700;
	int coca=400;
	int count=0;
	int cr=0,s=0,cc=0;
	printf("현재 당신이 소유하고 있는 금액 : 3500\n");
	
	for(cr=0;cr<=9;cr++){
		money-=cr*cream;
		if (cr!=0) {
			count++;
		}
			
		for(s=0;s<=7;){
			money-=s*shirim;
			if (s!=0)  {
			count++;
			}
				
			for(cc=0;cc<=12;cc++){
				money-=cc*coca;
				if (cc!=0){
				count++;
			}
					
				if (count==3){
				printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cr,s,cc);
				}
			}
		}
		count=0;
	}
	printf("끝\n");
	return 0;
}
