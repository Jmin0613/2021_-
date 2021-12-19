#include <ArrayStack.h>

bool checkMatching (char* filename){
	File *fp = fopen (filename, "r");
	if (fp=NULL){
		error("Error : 파일이 존재 안됨.\n");
	}
	
	int nLine=1;
	int nChar=0;
	ArrayStack stack;
	char ch;
	
	bool Single_q=false;
	
	while ((ch=getc(fp)) != EOF){
		//작은 따옴표
		if ((ch='\n' && (single_q == false)) && Single_q == false){
			Single_q=true;
		}else if ((ch=='\n') && Single_q == false){
			Single_q=false;
		}
		if (ch == '\n'){
			nLine++;
		}
		nChar++;
		
		//파일괄호검사
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
	prinf("[%s] 파일 검사 결과 : \n", filename);
	if (stack.isEmpty()){
		printf("Error : 문제발견! (라인수 = %d, 문자수 = %d)\n\n", nLine, nChar);
	}else{
		printf("OK : 괄호닫기정상 (라인수 = %d, 문자수 = %d)\n\n", nLine, nChar);
	}
	return stack.isEmpty();
}

void main(){
	checkMatching("ArrayStack.h");
	checkMatching("03장-checkMatcing.cpp");
}
