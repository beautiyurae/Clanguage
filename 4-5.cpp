// �о� ���� ���� ���������� ī��Ʈ��
#include <stdio.h>

int main(void) {

	int i, n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		while (i <= n) {
			printf("%d ", i++);
		}
		printf("\n");
	}
	return 0;
}