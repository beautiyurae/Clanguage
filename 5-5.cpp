// �迭�� ��� ��� ������ ����
#include <stdio.h>
#define NUMBER 7 // ��ü ������ ��ũ��, NUMBER�� 7�� ġȯ

int main(void) {
	int i;
	int x[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; i++) {
		int temp = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}

	printf("��ȯ�߽��ϴ�.\n");

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}