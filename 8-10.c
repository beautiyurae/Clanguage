// 2���� ������x�� y�� �ִ� ������� ��Ŭ���� ȣ������ �̿��� ���ϴ� �Լ�
#include <stdio.h>
int gcd(int x, int y) {
	int r = x % y;
	if (r == 0) {
		return y;
	}
	return gcd(y, r);
}

int main(void) {
	int x, y;
	printf("2���� ������x�� y�� �ִ� ������� ���մϴ�.\n");
	printf("������ �Է��ϼ���: "); scanf("%d", &x);
	printf("������ �Է��ϼ���: "); scanf("%d", &y);
	printf("�ִ� ������� %d�Դϴ�.\n", gcd(x, y));
	return 0;
}