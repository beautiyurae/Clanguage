//// �л� Ű�� �о� �鿩 ������������ �����ϴ� ���α׷��� �ۼ��϶�.
//// ���� ���� �˰����� �̿��϶�.
//#include <stdio.h>
//#define NUMBER 5
//void bsort(int a[], int n) {
//	for (int i = n; i > 0; i--) {
//		for (int j = 1; j < i; j++) {
//			if (a[j - 1] > a[j]) {
//				int temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}
//		}
//	}
//}
//
//int main(void) {
//	int height[NUMBER];
//	printf("%d���� Ű�� �Է����ּ���.\n", NUMBER);
//	for (int i = 0; i < NUMBER; i++) {
//		printf("%2d�� : ", i + 1);
//		scanf("%d", &height[i]);
//	}
//	bsort(height, NUMBER);
//	printf("������������ �����߽��ϴ�.\n");
//	for (int i = 0; i < NUMBER; i++) {
//		printf("%2d�� : %d\n", i + 1, height[i]);
//	}
//	return 0;
//
//}

// ��������
#include <stdio.h>
#define NUMBER 5

void bsort(int a[], int n) {
	for (int i = n; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			if (a[j - 1] < a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void) {
	int height[NUMBER];
	printf("%d���� Ű�� �Է����ּ���.\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�� : ", i + 1);
		scanf("%d", &height[i]);
	}
	bsort(height, NUMBER);
	printf("������������ �����߽��ϴ�.\n");
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�� : %d\n", i + 1, height[i]);
	}

	return 0;
}