#include <stdio.h>
#define max(x, y) ((x > y) ? x : y)
int main(void) {
	int a, b, c, d;

	puts("4���� ������ �Է��ϼ���.");

	printf("���� a : "); scanf("%d", &a);
	printf("���� b : "); scanf("%d", &b);
	printf("���� c : "); scanf("%d", &c);
	printf("���� d : "); scanf("%d", &d);

	printf("�ִ��� %d�Դϴ�.\n", max(max(a, b), max(c, d)));
	printf("�ִ��� %d�Դϴ�.\n", max(max(max(a, b), c), d));

	return 0;
}