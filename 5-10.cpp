//4�� 3���� ��İ� 3�� 4���� ����� �� ���ϱ�
#include <stdio.h>

int main(void) {

	int i, j, k;
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4�� 3�� a�� 3�� 4���� b�� ���� c�� ���մϴ�.\n");

	printf("a�� �� ��� ���� �Է��ϼ���.\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("b�� �� ��� ���� �Է��ϼ���.\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("b[%d][%d] : ", i, j);
			scanf_s("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("c�� ���� ������ �����ϴ�.\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}
	return 0;
}