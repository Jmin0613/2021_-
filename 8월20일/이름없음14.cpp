#include <stdio.h>

char copy_str(char *dest, char *src);
int Print_Obj_Status(struct obj OBJ);

struct obj {
	char name[20];
	int x, y;
} Ball;

int main(){
	Ball.x=3;
	Ball.y=4;
	copy_str(Ball.name, "RED BALL"); //Ball.name -> 배열이기에 &안씀  
	
	Print_Obj_Status(Ball);
	
	return 0;
}

int Print_Obj_Status(struct obj OBJ){
	printf("Location of %s \n", OBJ.name);
	printf("( %d , %d ) \n", OBJ.x, OBJ.y);
	
	return 0;
}

char copy_str (char *dest, char *src){
	while(*src){
		*dest=*src;
		src++;
		dest++;
	}
	
	*dest='\0';
	
	return 1;
}
