// �о� ���� ���� ������ŭ 1234567890�� �ݺ� ���
#include <stdio.h>

int main(void) {

	int n, i;

	printf("���� ������ �Է����ּ���. : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n / 10; i++) {
		printf("1234567890");
	}
	for (i = 1; i <= n % 10; i++) {
		printf("%d", i);
	}
	putchar('\n');
	return 0;
}

/*
* for (i = 1; i <= n; i++){
*     printf("%d", i % 10);
* }
* putchar('\n');
* return 0;
*/