// �о� ���� ���������� 1���� ī��Ʈ�ٿ�
#include <stdio.h>

int main(void) {

	int n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		while (n >= 1) {
			printf("%d ", n--);
		}
		printf("\n");
	}
	return 0;
}