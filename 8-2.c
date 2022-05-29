#include <stdio.h>
#define max(x, y) ((x > y) ? x : y)
int main(void) {
	int a, b, c, d;

	puts("4개의 정수를 입력하세요.");

	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);
	printf("정수 c : "); scanf("%d", &c);
	printf("정수 d : "); scanf("%d", &d);

	printf("최댓값은 %d입니다.\n", max(max(a, b), max(c, d)));
	printf("최댓값은 %d입니다.\n", max(max(max(a, b), c), d));

	return 0;
}