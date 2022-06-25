//// 학생 키를 읽어 들여 오름차순으로 정렬하는 프로그램을 작성하라.
//// 버블 정렬 알고리즘을 이용하라.
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
//	printf("%d명의 키를 입력해주세요.\n", NUMBER);
//	for (int i = 0; i < NUMBER; i++) {
//		printf("%2d번 : ", i + 1);
//		scanf("%d", &height[i]);
//	}
//	bsort(height, NUMBER);
//	printf("오름차순으로 정렬했습니다.\n");
//	for (int i = 0; i < NUMBER; i++) {
//		printf("%2d번 : %d\n", i + 1, height[i]);
//	}
//	return 0;
//
//}

// 내림차순
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
	printf("%d명의 키를 입력해주세요.\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d번 : ", i + 1);
		scanf("%d", &height[i]);
	}
	bsort(height, NUMBER);
	printf("내림차순으로 정렬했습니다.\n");
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d번 : %d\n", i + 1, height[i]);
	}

	return 0;
}