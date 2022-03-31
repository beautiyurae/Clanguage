// ����� �� ���ϱ�
#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
	int i, j, k;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

int main(void) {
	int i, j;
	int mx[4][3];
	int my[3][4];
	int mz[4][4];

	printf("4�� 3���� mx�� 3�� 4���� my�� ���� ���մϴ�.\n");

	puts("��� mx");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("mx[%d][%d] : ", i, j);
			scanf_s("%d", &mx[i][j]);
		}
	}

	puts("��� my");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("my[%d][%d] : ", i, j);
			scanf_s("%d", &my[i][j]);
		}
	}
	mat_mul(mx, my, mz);

	puts("����� ��");
		
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", mz[i][j]);
		}
		printf("\n");
	}
	return 0;
}