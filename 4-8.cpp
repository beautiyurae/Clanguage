// �о� ���� ���� ���������� ī��Ʈ��
#include <stdio.h>

int main(void) {

	int n;

	printf("���� ������ �Է��ϼ���. : ");
	scanf_s("%d", &n);

	if (n >= 1) {
		int i = 1;
		printf("{");
		while (i < n) {
			printf("%d, ", i++);
		}
		printf("%d}\n", n);
	}
	return 0;
}