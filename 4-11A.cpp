// �о� ���� ���� ������ ������ŭ +�� -�� ����� ���
#include <stdio.h>

int main(void) {

	int i, n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {

		int i = 1;

		while (i <= n) {
			if (i % 2) {
				putchar('+');
			}
			else
				putchar('-');
			i++;
		}
		putchar('\n');
	}
	return 0;
}