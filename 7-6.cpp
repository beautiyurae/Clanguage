// �� a & b == b & c�� ���� ���
#include <stdio.h>
int main(void) {
	unsigned a, b, c;
	printf("a : "); scanf_s("%u", &a);
	printf("b : "); scanf_s("%u", &b);
	printf("c : "); scanf_s("%u", &c);
	printf("a & b == b & c�� ���� %u�Դϴ�.\n", a & b == b & c);

	return 0;
}