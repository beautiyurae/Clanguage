// �迭�� ��� ��Ҹ� ������ �� �ٸ� �迭�� ����
#include <stdio.h>
#define NUMBER 7

void intary_rcpy(int v1[], const int v2[], int n) {
	for (int i = 0; i < n; i++) {
		v1[i] = v2[n - i - 1];
	}
}

int main(void) {
	int x1[NUMBER], x2[NUMBER];
	for (int i = 0; i < NUMBER; i++) {
		printf("x1[%d] : ", i); scanf_s("%d", &x1[i]);
	}
	intary_rcpy(x2, x1, NUMBER);

	puts("�����ϰ� �����߽��ϴ�.");
	for (int i = 0; i < NUMBER; i++) {
		printf("x2[%d] = %d\n", i, x2[i]);
	}
	return 0;
}