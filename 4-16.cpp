// Ű�� ǥ�� ������ ����ǥ ���
#include <stdio.h>

int main(void) {

	int height;
	int lower, upper, step;

	printf("�� cm���� : ");
	scanf_s("%d", &lower);
	printf("�� cm���� : ");
	scanf_s("%d", &upper);
	printf("�� cm���� : ");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step) {
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);
	}
	return 0;
}