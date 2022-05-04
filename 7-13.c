#include <stdio.h>

int main(void) {
	float a;
	double b;
	long double c;
	puts("3개의 실숫값을 입력해주세요.");

	printf("float형       a: "); scanf("%f", &a);
	printf("double형      b: "); scanf("%lf", &b);
	printf("long double형 c: "); scanf("%lf", &c);

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %lf\n", c);

	return 0;
}