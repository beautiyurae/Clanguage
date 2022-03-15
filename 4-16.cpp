// 키와 표준 몸무게 대응표 출력
#include <stdio.h>

int main(void) {

	int height;
	int lower, upper, step;

	printf("몇 cm부터 : ");
	scanf_s("%d", &lower);
	printf("몇 cm까지 : ");
	scanf_s("%d", &upper);
	printf("몇 cm마다 : ");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step) {
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);
	}
	return 0;
}