// �о� ���� ���������� 0���� ī��Ʈ�ٿ�
#include <stdio.h>
int main(void) {
	int n;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	if (n >= 0) {
		while (n >= 0) {
			printf("%d ", n);
			n--;
		}
		printf("\n");
	}
	return 0;
}