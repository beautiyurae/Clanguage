//  �о� ���� ������ ������ ��� ���簢���� ���� ����(����) ����
#include <stdio.h>

int main(void) {

	int area;
	int height;

	printf("���� : ");
	scanf_s("%d", &area);

	for (height = 1; height <= (area / height); height++) {
		if (area % height != 0) continue;
		printf("%d x %d\n", height, area / height);
	}
	return 0;
}