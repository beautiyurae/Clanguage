//�迭�� ��ҿ� ���� �о� �鿩 ���
#include <stdio.h>
#define NUMBER 96 // NUMBER��� ��ũ�� �� 96�� ġȯ

int main(void) {

	int i, num; // num : ��� ���� 
	int a[NUMBER]; // a[] : �迭 96�ڸ� 0~95

	printf("������ �� : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a1~%d ���̷� �Է����ּ���. ", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d�� : ", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("{");

	for (i = 0; i < num - 1; i++) {
		printf("%d, ", a[i]);
	}
	printf("%d}\n", a[i]);

	return 0;

}