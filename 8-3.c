#include <stdio.h>
#define swap(type, a, b) do { type t = a; a = b; b = t; } while (0)

int main(void) {
	int x, y;
	double a, b;

	puts("2���� ������ �Է��ϼ���.");
	printf("���� x : "); scanf("%d", &x);
	printf("���� y : "); scanf("%d", &y);
	swap(int, x, y);
	printf("��ȯ�߽��ϴ�.\nx�� %d�̰� y�� %d�Դϴ�.\n", x, y);

	puts("2���� �Ǽ��� �Է��ϼ���.");
	printf("�Ǽ� a : "); scanf("%lf", &a);
	printf("�Ǽ� b : "); scanf("%lf", &b);
	swap(double, a, b);
	printf("��ȯ�߽��ϴ�.\na�� %0.3f�̰� b�� %0.3f�Դϴ�.\n", a, b);

	return 0;
}
