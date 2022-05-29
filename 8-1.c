#include <stdio.h>
#define diff(x,y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void) {
	int a, b;

	puts("2개의 정수를 입력하세요.");

	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);
	printf("이들의 차이는 %d입니다.\n", diff(a, b));

	return 0;
}