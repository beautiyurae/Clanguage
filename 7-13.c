#include <stdio.h>

int main(void) {
	float a;
	double b;
	long double c;
	puts("3���� �Ǽ����� �Է����ּ���.");

	printf("float��       a: "); scanf("%f", &a);
	printf("double��      b: "); scanf("%lf", &b);
	printf("long double�� c: "); scanf("%lf", &c);

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %lf\n", c);

	return 0;
}