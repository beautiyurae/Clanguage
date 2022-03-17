// width개마다 줄 바꿈하면서  no개의 '*' 출력
#include <stdio.h>

int main(void) {

	int no, width;

	printf("몇 개의 *를 출력할까요? : ");
	scanf_s("%d", &no);
	printf("몇 개마다 줄 바꿈을 할까요? : ");
	scanf_s("%d", &width);

	if (no > 0) {
		int i, j;
		int rem = no % width;

		for (i = 1; i <= no / width; i++) {
			for (j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}
		if (rem != 0) {
			for (i = 1; i <= rem; i++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

/* // 내가 한 방법
	for (int i = 1; i <= no / width; i++) {
			for (int j = 1; j <= width; j++) {
				printf("*");
			}
			printf("\n");
		}

		int rem = 0;
		rem = no % width;
		if (rem != 0) {
			while (rem > 0) {
				printf("*");
				rem--;
			}
			printf("\n");
		}

	return 0;
}
*/