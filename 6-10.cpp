// ���� ������ ���� ������ ���� ���� ���ϱ�
#include <stdio.h>
#define NUMBER 5

int min_of(const int v[], int n) {
	int i;
	int min = v[0];

	for (i = 0; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

int main(void) {

	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;

	printf("%d���� ������ �Է��ϼ���.\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("[%d] ���� : ", i + 1);
		scanf_s("%d", &eng[i]);
		printf("    ���� : ");
		scanf_s("%d", &mat[i]);
	}

	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("���� �ּ� ���� =%d\n", min_e);
	printf("���� �ּ� ���� =%d\n", min_m);

	return 0;
}