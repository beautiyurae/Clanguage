//  읽어 들인 정수가 넓이인 모든 직사각형의 변의 길이(정수) 나열
#include <stdio.h>

int main(void) {

	int area;
	int height;

	printf("넓이 : ");
	scanf_s("%d", &area);

	for (height = 1; height <= (area / height); height++) {
		if (area % height != 0) continue;
		printf("%d x %d\n", height, area / height);
	}
	return 0;
}