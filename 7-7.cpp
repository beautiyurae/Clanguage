// unsigned�� ���� ��Ʈ ���
#include <stdio.h>

int count_bits(unsigned x) {

	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1; // x = x >> 1;
	}
	return bits;
}

int int_bits(void) {
	return count_bits(~0U);
}

void print_bits(unsigned x) {
	int i;
	for (i = int_bits() - 1; i >= 0; i--) {
		printf(((x >> i) & 1U) ? "1" : "0");
	}
}

int main(void) {
	unsigned x;

	printf("���� �ƴ� ���� : "); scanf_s("%u", &x);
	printf("�� ������ ������ ");

	print_bits(x);
	printf("�Դϴ�.\n");
	return 0;
}