// �о� ���� �������� ��ȣ ����(���ϴ� ��ŭ �ݺ�)
#include <stdio.h>
int main(void) {

	int retry; // ó���� ����Ұž�?

	do {

		int n;
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &n);

		if (n == 0) {
			printf("�� ���� 0�Դϴ�.\n");
		}
		else if (n > 0) {
			printf("�� ���� ����Դϴ�.\n");
		}
		else {
			printf("�� ���� �����Դϴ�.\n");
		}
		printf("�� �� ��? [Yes...0/No...else] : ");
		scanf_s("%d", &retry);

	} while (retry == 0); // !retry �� retry == 0�� ����
	return 0;
}