#include <stdio.h>

struct CompressHeader {
	char flags;
	int version;
};

int main(){
	struct CompressHeader header;
	
	printf("%d \n",sizeof(header));
	
	return 0;
}
