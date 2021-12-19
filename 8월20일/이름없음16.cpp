// 공용체 -> 메모리공간 공유, 메모리공간이 공용 
#include <stdio.h>
union A{
	int i;
	char j;
};

int main(){
	union A a;
	a.i=0x12345678;
	printf("%x", a.j);
	return 0;
}
