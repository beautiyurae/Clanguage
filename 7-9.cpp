// 부호 없는 정수의 임의 비트 조작
#include <stdio.h>

int count_bits(unsigned x) {
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void) {
	return count_bits(~0U);
}

void print_bits(unsigned x) {
	int i;
	for (i = int_bits() - 1; i >= 0; i--) {
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
} 

unsigned lsht(unsigned x, int n) {                           // x = 000000....001, n = 4
	return (n <= 0 || n >= int_bits()) ? x : (x << n);       // 5번째 칸에 1이 생기는 거야
}
unsigned set(unsigned x, int pos) {
	return x | lsht(1U, pos);
}
unsigned reset(unsigned x, int pos) {
	return x & ~lsht(1U, pos);                               // 5번째 칸이 0이 되고 나머지는 1이 되는거야      000011111110  
}                                                            //                                                000000000001       01111
unsigned inverse(unsigned x, int pos) {
	return x ^ lsht(1U, pos);
}

int main(void) {
	unsigned x, pos;
	printf("부호 없는 정수 x를 n비트 조작합니다.\n");
	printf("x   : "); scanf_s("%u", &x);
	printf("pos : "); scanf_s("%u", &pos);
	printf("\nx               = "); print_bits(x);
	printf("\nset(x, pos)     = "); print_bits(set(x, pos));
	printf("\nreset(x, pos)   = "); print_bits(reset(x, pos));
	printf("\ninverse(x, pos) = "); print_bits(inverse(x, pos));
	putchar('\n');
	return 0;
}