// �о� ���� 10���� ���� �������� 8������ 16������ ���
#include <stdio.h>
int main(void) {
	int n;
	printf("���� ������ : ");
	scanf_s("%d", &n);

	printf("8������ 0%o�Դϴ�.\n", n);
	printf("16������ 0x%x�Դϴ�.\n", n);

	return 0;
}