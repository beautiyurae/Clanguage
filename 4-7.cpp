// �Է��� ������ ������ 2�� �ŵ������� ������������ ���
#include <stdio.h>

int main(void) {

	int i, n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 2;
			while (i <= n) {
				printf("%d ", i);
				i *= 2;
			}
			printf("\n");
	}
	return 0;
}