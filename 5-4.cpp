// �迭�� ��� ��Ҹ� ������ �迭�� ���� ����

#include <stdio.h>

int main(void) {

	int i;
	int a[5] = { 17,23,36 }; // {17, 23, 36, 0, 0}���� �ʱ�ȭ
	int b[5];

	for (i = 0; i < 5; i++) {
		b[i] = a[4 - i];  // b[0] = a[4];
	}

	printf("   a   b\n");
	printf("----------\n");

	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}
	return 0;
}
