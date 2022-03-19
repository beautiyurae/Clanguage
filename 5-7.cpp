//배열의 요소에 값을 읽어 들여 출력
#include <stdio.h>
#define NUMBER 96 // NUMBER라는 매크로 는 96로 치환

int main(void) {

	int i, num; // num : 요소 개수 
	int a[NUMBER]; // a[] : 배열 96자리 0~95

	printf("데이터 수 : ");

	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d번 : ", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("{");

	for (i = 0; i < num - 1; i++) {
		printf("%d, ", a[i]);
	}
	printf("%d}\n", a[i]);

	return 0;

}