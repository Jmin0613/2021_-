#include <ArrayStack.h>

bool checkMatching (char* filename){
	File *fp = fopen (filename, "r");
	if (fp=NULL){
		error("Error : ������ ���� �ȵ�.\n");
	}
	
	int nLine=1;
	int nChar=0;
	ArrayStack stack;
	char ch;
	
	bool Single_q=false;
	
	while ((ch=getc(fp)) != EOF){
		//���� ����ǥ
		if ((ch='\n' && (single_q == false)) && Single_q == false){
			Single_q=true;
		}else if ((ch=='\n') && Single_q == false){
			Single_q=false;
		}
		if (ch == '\n'){
			nLine++;
		}
		nChar++;
		
		//���ϰ�ȣ�˻�
		if ((ch == '[' || ch == '(' || ch == '{') && Single_q == false){
			stack.push(ch);
		}else if ((ch == ']' || ch ==')' || '}') && Single_q == false){
			char pre=stack.pop();
			if ((ch == ']' && prev!='['))
			|| (ch ==')' && prev!='(')
			|| (ch == '}' && prev!='{')){
				break;
			}
		}
	}
	fclose(fp);
	prinf("[%s] ���� �˻� ��� : \n", filename);
	if (stack.isEmpty()){
		printf("Error : �����߰�! (���μ� = %d, ���ڼ� = %d)\n\n", nLine, nChar);
	}else{
		printf("OK : ��ȣ�ݱ����� (���μ� = %d, ���ڼ� = %d)\n\n", nLine, nChar);
	}
	return stack.isEmpty();
}

void main(){
	checkMatching("ArrayStack.h");
	checkMatching("03��-checkMatcing.cpp");
}
