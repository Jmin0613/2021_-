#include <stdio.h>
#include <stdbool.h>
int main() {
	printf("%d\n", true && true);  //true AND true�� 1
	printf("%d\n", true && false);  //ture AND false�� 0
	printf("%d\n", false && true);  //false AND true�� 0
	printf("%d\n", false && false);  //false AND false�� 0

	printf("%d\n", true || true);  //true OR true�� 1
	printf("%d\n", true || false);  //ture OR false�� 1
	printf("%d\n", false || true);  //false OR true�� 1
	printf("%d\n", false || false);  //false OR false�� 0

	return 0;
}