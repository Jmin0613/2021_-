#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point lu; //�»��
	Point rd; //���ϴ�
} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("�簢���� ����: %d \n\n", (rec.lu.xpos - rec.rd.xpos) * (rec.lu.ypos - rec.rd.ypos));
}

void ShowRecPos(Rectangle rec)
{
	printf("�� ���: [%d, %d] \n", rec.lu.xpos, rec.lu.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.lu.xpos, rec.rd.ypos);
	printf("�� ���: [%d, %d] \n", rec.rd.xpos, rec.lu.ypos);
	printf("�� �ϴ�: [%d, %d] \n\n", rec.rd.xpos, rec.rd.ypos);
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