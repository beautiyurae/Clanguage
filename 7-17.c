//// 0.0���� 1.0���� 0.01������ �ݺ��Ͽ� �հ踦 ���� (float�� �̿��� �ݺ�)
//#include <stdio.h>
//int main(void) {
//	float x, sum = 0.0;
//
//	for (x = 0.0; x <= 1.0; x += 0.01) {
//		sum += x;
//	}
//
//	printf("0.00, 0.01, 0.02, ..., 1.00�� �հ�� %f�Դϴ�.\n", sum);
//
//	return 0;
//}

// 0.0���� 1.0���� 0.01������ �ݺ��Ͽ� �հ踦 ���� (int�� �̿��� �ݺ�)
#include <stdio.h>
int main(void) {
	int i;
	float sum = 0.0;

	for (i = 0; i <= 100; i++) {
		sum += i / 100.0;
	}

	printf("0.00, 0.01, 0.02, ..., 1.00�� �հ�� %f�Դϴ�.\n", sum);

	return 0;
}