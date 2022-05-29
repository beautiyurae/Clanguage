#include <stdio.h>
#define swap(type, a, b) do { type t = a; a = b; b = t; } while (0)

int main(void) {
	int x, y;
	double a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 x : "); scanf("%d", &x);
	printf("정수 y : "); scanf("%d", &y);
	swap(int, x, y);
	printf("교환했습니다.\nx는 %d이고 y는 %d입니다.\n", x, y);

	puts("2개의 실수를 입력하세요.");
	printf("실수 a : "); scanf("%lf", &a);
	printf("실수 b : "); scanf("%lf", &b);
	swap(double, a, b);
	printf("교환했습니다.\na는 %0.3f이고 b는 %0.3f입니다.\n", a, b);

	return 0;
}
