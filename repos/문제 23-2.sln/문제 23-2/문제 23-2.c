#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point lu; //좌상단
	Point rd; //우하단
} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("사각형의 넓이: %d \n\n", (rec.lu.xpos - rec.rd.xpos) * (rec.lu.ypos - rec.rd.ypos));
}

void ShowRecPos(Rectangle rec)
{
	printf("좌 상단: [%d, %d] \n", rec.lu.xpos, rec.lu.ypos);
	printf("좌 하단: [%d, %d] \n", rec.lu.xpos, rec.rd.ypos);
	printf("우 상단: [%d, %d] \n", rec.rd.xpos, rec.lu.ypos);
	printf("우 하단: [%d, %d] \n\n", rec.rd.xpos, rec.rd.ypos);
}

int main(void)
{
	Rectangle rec1 = { {1,2}, {4,4} };
	Rectangle rec2 = { {0,0}, {7,5} };
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}