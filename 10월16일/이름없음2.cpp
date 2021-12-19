#include <stdio.h>

struct Point {
	int x;
	int y;
};

void swapXY(Point* p) {
	int tmp = (*p).x;
	(*p).x = (*p).y;
	(*p).y = tmp;
}

int main() {
	Point pos = { 3,4 };

	swapXY(&pos);

	printf("(%d, %d)\n", pos.x, pos.y);
}
