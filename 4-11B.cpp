// �о� ���� ���� ������ ������ŭ +�� -�� ����� ���
#include <stdio.h>

int main(void) {

	int i, n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		while (i <= n / 2) {
			printf("+-");
			i++;
		}
		if (n % 2 == 1) {
			printf("+");
		}
		putchar('\n');
	}
	return 0;
}