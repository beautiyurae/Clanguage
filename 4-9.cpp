// �о� ���� ���� ������ŭ *�� ���� ���
#include <stdio.h>

int main(void) {

	int n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		while (n-- > 0) {
			putchar('*');

		}
		putchar('\n');
	}
	return 0;
}



/*if (n >= 1) {
		int i = 1;
		while (i <= n) {
			printf("*");
			i++;
		}
		printf("\n");
	}
	return 0;*/