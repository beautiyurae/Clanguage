// �о� ���� ������ ������ ������ �� ���� �� ���
#include <stdio.h>

int main(void) {

	int n;

	printf("�� ���� *�� ����ұ��?");
	scanf_s("%d", &n);

	if (n > 0) {

		int i;

		for (i = 0; i < n; i++) {

			printf("*");

			if (i % 5 == 4) {
				printf("\n");
			}
		}
		if (i % 5 != 0) {
			printf("\n");
		}
	}
	return 0;
}




/*
	if (n > 0) {

		int i;

		for (int i = 1; i <= n / 5; i++) {
			printf("*****\n");
		}
		if (n % 5 != 0) {
			for (int j = 1; j <= n % 5; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
*/