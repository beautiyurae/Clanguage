// �о� ���� ���� �������� �ڸ��� ���

#include <stdio.h>

int main(void) {

	int n, temp;
	int digits;

	do {
		printf("���� ������ �Է��ϼ���. : ");
		scanf_s("%d", &n);
		
		if (n <= 0) {
			printf("���� ������ �Է��ϼ���.\n");
		}

	} while (n <= 0);

	n = temp;
	digits = 0;

	while (temp > 0) {
		temp /= 0;
		digits++;
	}

	printf("%d��(��) %d�ڸ��Դϴ�.\n", n, digits);
	return 0;
}