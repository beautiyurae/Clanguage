#include <stdio.h>
#include <limits.h>
int main(void) {

	unsigned a;
	unsigned b;

	puts("��ȣ ���� �������� �հ� ���� ���մϴ�.");

	printf("UINT_MAX�� %u�Դϴ�.\n", UINT_MAX);
	printf("UINT_MAX�� �Ѵ´ٸ� �� ���� ����� (UINT_MAX + 1)�� ���� �������� �ȴ�.\n");

	printf("a : "); scanf("%u", &a);
	printf("b : "); scanf("%u", &b);

	printf("a + b = %u\n", a + b);
	printf("a * b = %u\n", a * b);

	return 0;
}