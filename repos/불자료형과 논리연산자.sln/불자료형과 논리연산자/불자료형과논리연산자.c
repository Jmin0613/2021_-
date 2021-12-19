#include <stdio.h>
#include <stdbool.h>
int main() {
	printf("%d\n", true && true);  //true AND true는 1
	printf("%d\n", true && false);  //ture AND false는 0
	printf("%d\n", false && true);  //false AND true는 0
	printf("%d\n", false && false);  //false AND false는 0

	printf("%d\n", true || true);  //true OR true는 1
	printf("%d\n", true || false);  //ture OR false는 1
	printf("%d\n", false || true);  //false OR true는 1
	printf("%d\n", false || false);  //false OR false는 0

	return 0;
}