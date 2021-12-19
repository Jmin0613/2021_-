#include <stdio.h>
#define PrinVariableName(var) printf(#var "\n");
//어떠한 인자 앞에 # 을 붙이게 되면 이 인자를 문자열로 바꾸어 버림  

int main(int argc, char **argv){
	int a;
	
	PrintVariableNmae(a);
	
	return 0;
}
