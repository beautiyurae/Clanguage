// ���� �ƴ� ������ ��°��� ���ϴ� �Լ� factorial�� �ۼ��϶�

#include <stdio.h>
// ��͹��
//int factorial(int n) {
//	if (n > 0) {
//		return n * factorial(n - 1);
//	}
//	else
//		return 1;
//}

// �� ��͹��
int factorial(int n) {
	int f = 1;
	while (n > 0) {
		f *= n--;
	}
	return f;
}


int main(void) {
	int num;
	printf("������ �Է��ϼ��� : "); scanf("%d", &num);
	printf("%d�� ����� %d�Դϴ�.\n", num, factorial(num));
	return 0;
}

