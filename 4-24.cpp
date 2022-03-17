// 직사각형 그리기
#include <stdio.h>

int main(void) {

	int i, j;
	int side1, side2, height, width;

	puts("옆으로 긴 직사각형을 그립니다. ");
	printf("한 변(1) : ");
	scanf_s("%d", &side1);
	printf("한 변(2) : ");
	scanf_s("%d", &side2);

	if (side1 > side2) {
		width = side1;
		height = side2;
	}
	else {
		width = side2;
		height = side1;
	}

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}



/* // 첫 시도 
	if (side1 > side2) {
		width = side1; // width와 side1의 위치가 바뀌어있으면 안돼 height도 마찬가지로
		height = side2;
		for (i = 1; i <= height; i++) {
			for (j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {
		width = side2;
		height = side1;
		for (i = 1; i <= height; i++) {
			for (j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
*/