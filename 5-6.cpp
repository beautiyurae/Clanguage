// ���� ���� ������ ���
#include <stdio.h>

int main(void) {

	double a;
	int b;

	a = b = 1.5; // = ���Կ����ڴ� �����ʺ��� ���� a = (b = 1.5), a = 1.0�� ��
	             // ���� ����� ���� �ڷ����� �ٸ� ���� ���ǰ� �ʿ���
	printf("a = %.1f b = %d\n", a, b);
	return 0;
}