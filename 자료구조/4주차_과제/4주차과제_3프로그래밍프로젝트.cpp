#include "ArrayStack.h"

bool checkMatching(char* filename){
	FILE *fp = fopen(filename, "r");
	if(fp==NULL){
		error("Eeeoe: ������ ���� ����.\n");
	}
	
	int nLine=1;
	int nChar=0;
	ArrayStack stack;
	char ch;
	
	bool Single_q=false; //��������ǥ ó���� ���� 
	
	while((ch=getc(fp)) != EOF){
		
		//��������ǥ  
		if((ch=='\n' && (Single_q==false)) && Single_q == false){
			Single_q=true;
		}else if((ch == '\n') && Single_q == false){
			Single_q=false;
		}
		
		//////////////////////
		if(ch=='\n'){
			nLine+;
		}
		nChar++;
		
		//���ϰ�ȣ�˻�  
		if((ch == '[' || ch == '(' || ch == '{') && Single_q ==fasle){
			stack.push(ch);
		} else if ((ch == ']' || ch == ')' || ch == '}') && Single_q ==fasle) {
			char pre=stack.pop();
			if ((ch == ']' && prev !='[')
			|| (ch ==')' && prev != '(')
			|| (ch == '}' && prev != '{')){
				break;
			} 
		}
	}	
	fclose(fp);
	printf("[%s] ���� �˻� ��� : \n", filename);
	if(!stack.isEmpty()){
		printf("Error : �����߰�! (���μ�=%d, ���ڼ�=%d)\n\n", nLine,nChar);
	} else{
		printf("OK : ��ȣ�ܱ����� (���μ�=%d, ���ڼ�=%d)\n\n", nLine, nChar);
	}
	return stack.isEmpty();
}

void main(){
	checkMatching("ArrayStack.h");
	checkMatcjing("03��-checkMatching.cpp");
}
